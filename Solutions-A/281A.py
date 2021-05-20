s = list(input())

x = ""

x = x + s[0].upper()

for i in range(1, len(s)):
  x = x + s[i]

print(x)