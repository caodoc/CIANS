w = int(input())
h = float(input())

m = w / (h * h)

print('{0:0.1f}'.format(m))

if m < 20:
    print('Người gầy')
elif m >= 20 and m <= 30:
    print('Người lí tưởng')
else:
    print('Người mập')