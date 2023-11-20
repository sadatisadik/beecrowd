code,unit,price=([] for i in range(3))
for i in range(2):
    ca, ua, pa=input().split()
    code.append(int(ca))
    unit.append(int(ua))
    price.append(float(pa))

sum=0.0
for i in range(2):
    sum+=unit[i]*price[i]

print(f"VALOR A PAGAR: R$ {sum:.2f}")