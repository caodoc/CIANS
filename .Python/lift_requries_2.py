n = int(input())
m = int(input())

a = 0
b = 7

if (n < 4):
    print('A')
    a = n
else:
    print('B')
    b = n

if (m - a <= b - m):
    print('A')
else:
    print('B')