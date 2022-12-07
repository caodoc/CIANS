m = int(input())
n = int(input())

s = 0

for i in range(m, n + 1):
    if i % 3 == 0 or i % 5 == 0:
        s += i
        
print(s)