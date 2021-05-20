n, m, a = map(int, input().split())

v1 = 0
v2 = 0

if n%a == 0:
  v1 = n/a
else:
  v1 = n//a + 1

if m%a == 0:
  v2 = m/a
else:
  v2 = m//a + 1

print(v1 * v2)