
t = int(input())
while(t > 0):
    t -= 1
    _ = int(input())
    evens = []
    odds = []
    xs = list(map(int, input().split()))
    for x in xs:
        if x & 1:
            odds.append(x)
        else:
            evens.append(x)
    n = len(evens)
    m = len(odds)
    i = j = 0
    alice = bob = 0
    evens.sort(reverse=True)
    odds.sort(reverse=True)
    while i < n or j < m:
        if i < n:
            if j < m:
                if evens[i] > odds[j]:
                    alice += evens[i]
                    i += 1
                else:
                    j += 1
            else:
                alice += evens[i]
                i += 1
        else:
            j += 1

        if not(i < n or j < m):
            break

        if j < m:
            if i < n:
                if odds[j] > evens[i]:
                    bob += odds[j]
                    j += 1
                else:
                    i += 1
            else:
                bob += odds[j]
                j += 1

        else:
            i += 1

        if not(i < n or j < m):
            break

    if alice == bob:
        print("Tie")
    elif alice > bob:
        print("Alice")
    else:
        print("Bob")

