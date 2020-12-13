N, M, T = map(int, input().split())
battery = N
prevB = 0
for i in range(M):
  A, B = map(int, input().split())
  battery = battery - (A - prevB)
  if battery < 1:
    print ('No')
    exit()
  battery = battery + (B - A)
  if battery > N:
    battery = N
  prevB = B

battery = battery - (T - prevB)
if battery < 1:
  print('No')
else:
  print('Yes')