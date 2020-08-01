

s = input()
t = input()

m = len(s)
n = len(t)

dp = [[0 for _ in range(m+1)] for __ in range(n+1)]

for i in range(1, n+1):
    for j in range(1, m+1):
        if s[j-1] == t[i-1]:
            dp[i][j] = dp[i-1][j-1] + 1
        else:
            dp[i][j] = max(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])


word = [""] * dp[-1][-1]

i = n
j = m
index = dp[-1][-1]
while i > 0 and j > 0:
    if s[j-1] == t[i-1]:
        word[index-1] = s[j-1]
        j -= 1
        i -= 1
        index -= 1
    elif dp[i-1][j] > dp[i][j-1]:
        i -= 1 
    else:
        j -= 1

print("".join(word))










