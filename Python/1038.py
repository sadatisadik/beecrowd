x,y=[int(x) for x in input().split()]

if x==1:
    p=4.0*y
elif x==2:
    p=4.5*y
elif x==3:
    p=5.0*y
elif x==4:
    p=2.0*y
elif x==5:
    p=1.5*y
else:
    raise ValueError("Out of list!")
print(f"Total: R$ {p:.2f}")