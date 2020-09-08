class UnionFind:

    def __init__(self):
        self.parents = {}
        self.sz = {}
        self.size = 0
        self.mx = {}


    def add(self, a):
        if a in self.parents:
            return
        self.size += 1
        self.sz[a] = 1
        self.parents[a] = a 
        self.mx[a] = a

    def find(self, a):
        if a == -1:
            return -1
        if self.parents[a] != a:
            self.parents[a] = self.find(self.parents[a])

        return self.parents[a]

    def join(self, a, b):
        pa, pb = self.find(a), self.find(b)
        if pa == pb:
            return False
        if self.sz[pa] > self.sz[pb]:
            self.parents[pb] = pa
            self.sz[pa] += self.sz[pb]
            self.mx[pa] = max(self.mx[pa], self.mx[pb])
        else:
            self.parents[pa] = pb 
            self.sz[pb] += self.sz[pa]
            self.mx[pb] = max(self.mx[pa], self.mx[pb])
        self.size -= 1

        return True



n,m = (map(int,input().split()))
uf = UnionFind()
for i in range(1,n+2):
    uf.add(i)

for i in range(m):
    query = input().split()
    op, person = query[0], int(query[1])
    if op == "?":
        cand = uf.mx[uf.find(person)]
        if cand != n+1:
            print(cand)
        else:
            print(-1)
    elif op == "-":
        uf.join(person, person + 1)
