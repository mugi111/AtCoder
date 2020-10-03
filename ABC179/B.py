import sys
N = int(input())
count = 0
for i in range(N):
    tmp = input().split()
    if tmp[0] == tmp[1]:
      count = count + 1
      if count >= 3:
        print("Yes")
        sys.exit()
    else:
      count = 0;

print("No")