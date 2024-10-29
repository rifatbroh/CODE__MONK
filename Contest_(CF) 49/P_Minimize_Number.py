"""
    rifat hossain
"""
n = int(input())
v = list(map(int, input().split()))

cnt = 0
while True:
    flag = True
    for i in range(n):
        if v[i]%2 != 0:
            flag = False
            break
    if not flag:
        break
    for i in range(n):
        v[i] //= 2
    cnt +=1

print (cnt)