N, X = map(int, input().split())
S = input()

point = X

for s in S:
  if s=='o':
    point+=1
  else:
    if point>0:
      point -= 1

print(point)