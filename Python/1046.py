a,b=map(int,input().split())
if a>b or a==b:
    d=24-a+b
elif a<b:
    d=b-a
print(f"O JOGO DUROU {d} HORA(S)")