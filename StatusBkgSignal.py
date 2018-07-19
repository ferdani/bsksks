#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 18 15:24:59 2018

@author: macbookpro
"""
import numpy as np
import matplotlib.pyplot as plt
import math 

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

TotalYieldsMC = [806141.9 , 81294.93 , 81294.93 , 81294.93 , 24835.16 , 9731.72 , 9731.72 , 9731.72 , 9394.57 , 7947.09]  

SignalTotalResults = np.array([])

def RatioSignalTotal(MCcounts):
    count = MCcounts/806141.9
    return count 

for i in range(0,len(TotalYieldsMC)):
    SignalTotalResults = np.append(SignalTotalResults, RatioSignalTotal(TotalYieldsMC[i]))
    
print(Acumulative)
print(SignalTotalResults)
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
plt.plot(SignalTotalResults*100, color='b', marker='o' , linestyle='-', linewidth=1, label='Signal Yield')
plt.legend(prop={'size': 10}, loc="center right")
plt.grid(True)