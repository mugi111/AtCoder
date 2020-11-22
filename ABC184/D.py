A, B, C = map(int, input().split())

print(((100-A)*(A/(A+B+C))+(100-B)*(B/(A+B+C))+(100-C)*(C/(A+B+C))))