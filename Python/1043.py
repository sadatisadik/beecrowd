a,b,c=map(float,input().split())
if a+b>c and b+c>a and c+a>b:
    print(f"Perimetro = {(a+b+c):.1f}")
else:
    print(f"Area = {0.5*(a+b)*c:.1f}")