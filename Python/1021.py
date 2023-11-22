m=float(input())
x=int(m)
c=round((m-x)*100)

print("NOTAS:")

print(f"{int(x/100)} nota(s) de R$ 100.00")
r=x%100

print(f"{int(r/50)} nota(s) de R$ 50.00")
r=r%50

print(f"{int(r/20)} nota(s) de R$ 20.00")
r=r%20

print(f"{int(r/10)} nota(s) de R$ 10.00")
r=r%10

print(f"{int(r/5)} nota(s) de R$ 5.00")
r=r%5

print(f"{int(r/2)} nota(s) de R$ 2.00")
r=r%2

print("MOEDAS:")

print(f"{int(r/1)} moeda(s) de R$ 1.00")

print(f"{int(c/50)} moeda(s) de R$ 0.50")
r=c%50

print(f"{int(r/25)} moeda(s) de R$ 0.25")
r=r%25

print(f"{int(r/10)} moeda(s) de R$ 0.10")
r=r%10

print(f"{int(r/5)} moeda(s) de R$ 0.05")
r=r%5

print(f"{int(r/1)} moeda(s) de R$ 0.01")