def digitSum(n):
    s = str(n)
    array = list(map(int, s))
    return sum(array)


print(digitSum(input()))