from collections import defaultdict
n = int(input())
s = input()
c = defaultdict(int)
mx = 0
ans = ""
for i in range(n-1):
    cand = s[i:i+2]
    c[cand] += 1
    if c[cand] > mx:
        mx = c[cand]
        ans = cand

print(ans)



