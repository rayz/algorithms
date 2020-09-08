class UnionFind:

    def __init__(self):
        self.parents = {}
        self.sz = {}
        self.size = 0


    def add(self, a):
        if a in self.parents:
            return
        self.size += 1
        self.sz[a] = 1
        self.parents[a] = a 

    def find(self, a):
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
        else:
            self.parents[pa] = pb 
            self.sz[pb] += self.sz[pa]

        self.size -= 1

        return True



