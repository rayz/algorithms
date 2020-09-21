
n = int(input())
sm = 0
while(n):
    n,digit = divmod(n, 10)
    sm += digit

if sm % 9:
    print("No")
else:
    print("Yes")
