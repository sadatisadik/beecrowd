PI=3.14159
a,b,c=[float(x) for x in input().split()]
tri,cir,tra,sq,rec=0.5*a*c,PI*pow(c,2),0.5*(a+b)*c,pow(b,2),a*b
print(f"TRIANGULO: {tri:.3f}\nCIRCULO: {cir:.3f}\nTRAPEZIO: {tra:.3f}\nQUADRADO: {sq:.3f}\nRETANGULO: {rec:.3f}")