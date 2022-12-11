def num(n):
    if n==0:
        return 0
    if n==1:
        return 2
    if n == 2:
        return 3
    return num(n-1)+num(n-2)

n = int(input())
print(num(n))
