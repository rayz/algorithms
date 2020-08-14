from collections import defaultdict

count = defaultdict(int)
n = int(input())
nums = [int(i) for i in input().split(" ")]
sm = 0
for n in nums:
    count[n] += 1
    sm += n

q = int(input())

for _ in range(q-1):
    x,y = map(int, input().split(" "))
    print(x,y,"here")
    if x not in count:
        continue
    diff = y - x
    countx = count[x]
    count[x] = 0
    sm += (diff * countx)
    count[y] += count[x]
    print(sm)


