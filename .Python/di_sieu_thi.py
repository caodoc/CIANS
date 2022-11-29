n = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
f = int(input())

t = min(a / b,c / d)
t = min(t, e / f)

print('{0:0.8f}'.format(t * n))