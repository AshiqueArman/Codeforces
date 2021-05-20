n = int(input())

s = list(input())

count = 0

if len(s) == n:
  for i in range(n-1):
    if s[i] == s[i+1]:
      s[i] = '0'
      count += 1

print(count)