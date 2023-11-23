n1,n2,n3,n4=[float(x) for x in input().split()]
a=(n1*2.0+n2*3.0+n3*4.0+n4*1.0)/(2+3+4+1)
print(f"Media: {a:.1f}")
if a>=7.0:
    print("Aluno aprovado.")
elif a<5.0:
    print("Aluno reprovado.")
elif a>=5.0 and a<=6.9:
    print("Aluno em exame.")
    n5=float(input())
    print(f"Nota do exame: {n5:.1f}")
    b=(a+n5)/2
    if b>=5.0:
        print("Aluno aprovado.")
    elif b<=4.9:
        print("Aluno reprovado.")
    print(f"Media final: {b:.1f}")