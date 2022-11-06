from math import sqrt

a = int(input())
b = int(input())
c = int(input())

d = b ** 2 - 4 * a * c

if d < 0:
    print('PTVN')
elif d == 0:
    print(int(-b / (2 * a)))
    print(int(-b / (2 * a)))
else:
    print(int((-b - sqrt(d))/(2 * a)))
    print(int((-b + sqrt(d))/(2 * a)))