from math import sqrt

a = float(input())
b = float(input())
c = float(input())

p = (a + b + c ) / 2
s = sqrt(p * (p - a) * (p - b) * (p - c))

print('{0:0.1f}'.format(p * 2))
print('{0:0.1f}'.format(s))