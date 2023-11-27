a,b,c=map(float,input().split())
v=[a,b,c]
v.sort(reverse=True)
x,y,z=v[0],v[1],v[2]
if x>=y+z:
    print("NAO FORMA TRIANGULO")
elif pow(x,2)==pow(y,2)+pow(z,2):
    print("TRIANGULO RETANGULO")
elif pow(x,2)>pow(y,2)+pow(z,2):
    print("TRIANGULO OBTUSANGULO")
elif pow(x,2)<pow(y,2)+pow(z,2):
    print("TRIANGULO ACUTANGULO")
if x==y and y==z:
    print("TRIANGULO EQUILATERO")
elif x==y or y==z or z==x:
    print("TRIANGULO ISOSCELES")