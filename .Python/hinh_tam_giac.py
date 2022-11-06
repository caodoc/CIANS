from math import sqrt

a = float(input())
b = float(input())
c = float(input())

p = (a + b + c) / 2

print('{0:0.1f}'.format(a + b + c))

print('{0:0.1f}'.format(sqrt(p * (p - a) * (p - b) * (p - c))))