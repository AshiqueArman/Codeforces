s = list(input())

count = 0

for i in range(len(s) - 1):
  if s[i] == s[i + 1]:
    count += 1
    if count == 6:
      break
  if s[i] != s[i + 1]:
    count = 0

if count == 6:
  print("YES")
else:
  print("NO") 