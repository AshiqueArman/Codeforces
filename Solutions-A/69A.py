n = int(input())

count = [0, 0, 0]

for i in range(n):
  x = list(map(int, input().split()))
  count[0] += x[0]
  count[1] += x[1]
  count[2] += x[2]

if count[0] == 0 and count[1] == 0 and count[2] == 0:
  print("YES")
else:
  print("NO")