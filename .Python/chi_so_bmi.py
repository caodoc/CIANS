w = int(input())
h = float(input())

s = w / (h * h)

print('{0:0.1f}'.format(s))

if s < 20:
    print('Người gầy')
elif s >= 20 and s <= 30:
    print('Người lí tưởng')
else:
    print('Người mập')