n=int(input())
hr=int(n/3600)
min=int((n%3600)/60)
sec=int((n%3600)%60)
print(f"{hr}:{min}:{sec}")