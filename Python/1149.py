l=list(map(int,input().split()))
a='I'
sum=0
for i in l:
    if(a=='I'):
        a=int(i)
    elif(i>0):
        n=int(i)
        break
for i in range(n):
    sum+=a
    a+=1
print(sum)