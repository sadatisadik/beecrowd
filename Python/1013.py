def max(x,y):
    return int((x+y+abs(x-y))/2)

a,b,c=[int(x) for x in input().split()]
g=max(a,b)
g=max(g,c)
print(f"{g} eh o maior")