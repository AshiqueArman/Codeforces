k, n, w = map(int, input().split())

cost = 0

for i in range(w):
  cost += (i + 1) * k

if cost > n:
  print(cost - n)
else:
  print(0)