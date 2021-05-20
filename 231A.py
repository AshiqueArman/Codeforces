n = int(input())

count = 0

for i in range(n):
  s = input()
  nums = list(map(int, s.split()))
  
  x = nums[0] + nums[1] + nums[2]

  if x>1:
    count = count + 1
    
print(count)