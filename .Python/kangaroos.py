a = int(input())
b = int(input())
c = int(input())

if c - b >= b - a:
    print(c - b - 1)
else:
    print(b - a - 1)