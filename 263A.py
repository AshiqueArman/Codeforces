m = []

for i in range(5):
  x = list(input().split(" "))
  nums = list(map(int, x))
  m.append(nums)

count = 0

if m[2][2] != 1:
  for i in range(5):
    for j in range(5):
      if m[j][i] == 1:
        count = count + abs(j - 2)
        count = count + abs(i - 2) 

print(count)
