n = int(input())
s,t = input().split(" ") 

res = []
for i in range(n):
    res.append(s[i])
    res.append(t[i])

print("".join(res))
