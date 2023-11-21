import math
def dis(a,b,c,d):
    return float(math.sqrt(pow((b-a),2)+pow((d-c),2)))

x,y=([] for i in range(2))
for i in range(2):
    xa,ya=input().split()
    x.append(float(xa))
    y.append(float(ya))

s=dis(x[0],x[1],y[0],y[1])
print(f"{s:.4f}")