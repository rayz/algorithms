
n = int(input()) 
res = []
while n:
    n -= 1
    n,r = divmod(n, 26)
    res.append(chr(ord('a') + r))

res = res[::-1]
print("".join(res))

