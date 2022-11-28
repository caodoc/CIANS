l = int(input())
a = int(input())
b = int(input())

if l > a or l > b:
    print('UPLOAD ANOTHER')
elif l < a or l < b:
    print('CROP IT')
else:
    print('ACCEPTED')