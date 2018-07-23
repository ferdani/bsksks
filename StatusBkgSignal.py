#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 18 15:24:59 2018

@author: macbookpro

Python 3.6 (not 2.7)
"""
import numpy as np
import matplotlib.pyplot as plt

#======================= Levels distintos con cada corte ==========================================================
TotalLevels = ["PT cuts" , "Primary vertex cuts" , "PIDk of k+ k- pi+ pi-" , "Good track reconstruction cuts" ,\
                  "Protons veto cut" , "Kst and Kstb mass cuts" , "Kst and Kstb PT cuts" , \
                  "Fit tool vertex chi2 in Kst and Kstb cuts" , "DIRA Kst and Kstb", "Veto to muons"]

'''
Cantidad de procesos Background
'''

#cantidad de background por Level obtenidos con BackgroundRejection.C 
TotalBkgLevels = [9523265.0 , 723508.0 , 723508.0 , 723508.0 , 174453.0 , 48061.0 , 48061.0 , 48061.0 , 44662.0 , 33360.0]

BkgRejectionResults = [0,]

def BackgroundRejection(Init, End):
    reject = Init - End
    return reject/9523265.0
        
for i in range(1,len(TotalBkgLevels)):
    BkgRejectionResults = np.append(BkgRejectionResults , BackgroundRejection(TotalBkgLevels[i-1], TotalBkgLevels[i]))

Acumulative = [BkgRejectionResults[0]]

for i in range(1, len(BkgRejectionResults)):
    Acumulative=np.append(Acumulative, Acumulative[i-1]+BkgRejectionResults[i])
    
'''
Cantidad de señal frente a eventos totales (señal+fondo)
'''
#Tomamos como sucesos de señal los propios del MonteCarlo

TotalYieldsMC = [107078.0 , 73569.0 , 73569.0 , 73569.0 , 45925.0 , 45750.0 , 45750.0 , 45750.0 , 43929.0 , 41213.0]  

SignalTotalResults = np.array([])

def RatioSignalTotal(MCcounts):
    count = MCcounts/107078.0
    return count 

for i in range(0,len(TotalYieldsMC)):
    SignalTotalResults = np.append(SignalTotalResults, RatioSignalTotal(TotalYieldsMC[i]))
    
#============================================ Plot ===============================================================
#plots
fig=plt.figure(figsize=(20,10))
fig.subplots_adjust(top=0.95, bottom=0.3, hspace=0.3, wspace=0.2)

ax=fig.add_subplot(1,1,1)
#plt.title(r'Background rejection and Signal force', fontsize=25) 
ax.set_ylabel(r'Percentage [%]', fontsize=20)
ax.set_xlabel(r'Levels of cuts', fontsize=20)
plt.xticks(range(len(SignalTotalResults)), TotalLevels)
plt.setp( ax.xaxis.get_majorticklabels(), rotation=-90 , fontsize=8) 
plt.plot(Acumulative*100, color='r', marker='o' , linestyle='-', linewidth=1, label='Bkg rejection')
plt.plot(SignalTotalResults*100, color='b', marker='o' , linestyle='-', linewidth=1, label='Signal Yields')

ax.annotate('99.65 % Backgroud Rejection', xy=(9, 98), xytext=(8.0, 85.0), 
            textcoords='data', size=12, va="center", ha="center", bbox=dict(boxstyle="round", fc="w"), 
            arrowprops=dict(arrowstyle="-|>", connectionstyle="arc3,rad=+0.2", fc="w"), )

ax.annotate('38.49 % Signal Yields', xy=(9, 40), xytext=(8.5, 55.0),
            textcoords='data', size=12, va="bottom", ha="center", bbox=dict(boxstyle="round", fc="w"), 
            arrowprops=dict(arrowstyle="-|>", connectionstyle="arc3,rad=+0.2", fc="w"), )

plt.legend(bbox_to_anchor=(1, 0.2), prop={'size': 10})
plt.grid(True)

plt.savefig('StatusBkgSignal.png')
plt.savefig('StatusBkgSignal.pdf')
