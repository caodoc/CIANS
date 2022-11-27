a1 = int(input())
b1 = int(input())
c1 = int(input())
a2 = int(input())
b2 = int(input())
c2 = int(input())

if a1 / a2 == b1 / b2 != c1 / c2:
    print('HPTVN')
elif a1 / a2 == b1 / b2 == c1 / c2:
    print('PT vô số nghiệm')
elif a1 / a2 != b1 / b2:
    print((c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1))
    print((a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1))