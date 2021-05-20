m, n = map(int, input().split())

count = 0

if (m == 0 and n == 0) or (m == 1 and n == 1) or ( m == 0 and n == 1) or ( m == 1 and n == 0):
  count = 0
  
elif m>0 and n>1:
  if n%2 == 0:
    x = n//2
    count = m * x
  else:
    x = n//2
    count = m * x + m//2

elif n>0 and m>1:
  if m%2 == 0:
    x = m//2
    count = n * x
  else:
    x = m//2
    count = n * x + n//2

print(count)