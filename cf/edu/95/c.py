from functools import lru_cache

@lru_cache(None)
def go(i, turn, lst):
    if i >= len(lst):
        return 0
    skips = 0
    ans = float('inf')
    if turn == 0:
        if lst[i] == 1:
            skips += 1
        take = 0
        if i+1 < len(lst):
            if lst[i+1] == 1:
                take = skips+1 + go(i+2, 1, lst)
                ans = min(take, skips+go(i+1, 1, lst))
            else:
                ans = min(skips + go(i+1,1,lst), skips + go(i+2,1,lst))
            return ans
        else:
            return skips
    else:
        return min(go(i+1,0,lst), go(i+2,0,lst))

t = int(input())

while(t):
    t -= 1
    n = int(input())
    lst = tuple(map(int, input().split()))
    print(go(0,0,lst))

        
