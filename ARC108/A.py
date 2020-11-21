S, P = map(int, input().split())

print(S,P)
i = 1
while i*i <= P:
  if P % i == 0:
    if i != P // i:
      if i*i == S-P:
        print("Yes")
  i += 1
print("No")