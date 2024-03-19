#NEWTONS LAW OF COOLING
import math
T = 30                                                     #T = surrounding medium
T1 = 100                                                   # T1 = intial temperature
T2 = 70                                                    # T2 = temperature dropped
T3 = 40                                                    #T3 = at which we need to find time
t1 = 0                                                     #t1 = intial time
t2 = 15                                                    #t2 = taken time to temperature drop
k = 0                                                      # as the 0 * something zero intialized k = 0
c = (T1-T)/(math.exp(-0*k))                               # c = integration constantc
k1 = -(math.log((T2-T)/c))*(1/t2)                          #k1 = propotinality constant
c = (T1-T)/(math.exp(-k1*0))                               # c = integration constant
t = -(math.log((T3-T)/c))*(1/k1)                           # t = time to find when temperature change to T3
print("when the temperature "+str(T3) + " degree celsius the time is "+ str(t) + " minutes.")
