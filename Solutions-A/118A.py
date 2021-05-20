s = input()

x = ""

for i in range(len(s)):
  if s[i] != 'A' and s[i] != 'a' and s[i] != 'E' and s[i] != 'e' and s[i] != 'I' and s[i] != 'i' and s[i] != 'o' and s[i] != 'O' and s[i] != 'U' and s[i] != 'u' and s[i] != 'Y' and s[i] != 'y':
    x = x + s[i]

x = x.lower()

y = ""
for i in range(len(x)):
    y = y + '.'
    y = y + x[i]

print(y)