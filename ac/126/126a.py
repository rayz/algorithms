n,k = map(int, input().split())
s = list(input())

print(s[k-1].lower())
print('here')
s[k-1] = s[k-1].lower()
print(s)
