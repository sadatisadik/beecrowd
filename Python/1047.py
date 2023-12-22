ih,im,fh,fm=map(int,input().split())
t=((fh*60)+fm)-((ih*60)+im)
if t<=0:
    t=t+(24*60)
h,m=int(t/60),int(t%60)
print(f"O JOGO DUROU {h} HORA(S) E {m} MINUTO(S)")