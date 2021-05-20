x = list(input())
s = []

for i in range(len(x)):
  if x[i] != '+':
    s.append(x[i])

temp = 0

for i in range(len(s)-1):
  for j in range(len(s) - i - 1):
    if s[j] > s[j+1]:
      temp = s[j+1]
      s[j+1] = s[j]
      s[j] = temp

f = ''

for i in range(len(s)):
  f = f + s[i]
  if i < len(s) - 1: 
    f = f + '+'

print(f)
