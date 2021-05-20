n = int(input())

for i in range(n):
  w = input()
  l = len(w)
  if l > 10:
    fst = w[0]
    lst = w[l-1]
    print(fst + str(l - 2) + lst)
  else:
    print(w)
