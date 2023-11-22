import math
a,b,c=[float(x) for x in input().split()]
d=pow(b,2)-4*a*c
if a==0 or d<0:
    print("Impossivel calcular")
else:
    x=0.5*(-b+math.sqrt(d))/a
    y=0.5*(-b-math.sqrt(d))/a
    print(f"R1 = {x:.5f}\nR2 = {y:.5f}")