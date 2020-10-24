N = int(input())

i = 1
j = 1

while True:
  diff = N - pow(5, i)
  if diff <= 0:
    print(-1)
    exit(0)
  while True:
    tmpPow = pow(3, j)
    if diff == tmpPow:
      print(j,i)
      exit(0)
    if diff < tmpPow:
      break
    j+=1
  j=1
  i+=1
