n = int(input())

if n <= 10:
    m = n * 4000
    print(m)
else:
    m = 40000 + (n - 10) * 7000
    print(m)