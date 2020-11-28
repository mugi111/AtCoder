a, b ,x ,y = map(int, input().split())

current = a
time = 0

if x*2 < y:
    step = x*2
else:
    step = y

while True:
    if abs(current - b) == 1:
        break
    elif current < b:
        time = time + step
        current = current + 1
    elif b < current:
        time = time + step
        current = current - 1 
    else:
        break

if current < b:
    if x*3 < x+y:
        time = time + x*3
    else:
        time = time + x+y
else:
  	time = time + x
print(time)