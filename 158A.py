n, k = map(int, input().split())

L = list(map(int, input().split()))

temp = L[k-1]

count=0
for i in range(0,len(L)):
    if L[i]>=temp and L[i]>0 :
        count+=1
print(count)