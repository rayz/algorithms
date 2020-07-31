from collections import defaultdict

class UnionFind:

    def __init__(self):
        self.parents = {}
        self.sz = defaultdict(lambda:1) #size of every component
        self.size = 0


    def add(self, a):
        if a in self.parents:
            return
        self.size += 1
        self.parents[a] = -1

    def find(self, a):
        if self.parents[a] == -1:
            return a
        #path compression
        self.parents[a] = self.find(self.parents[a])
        return self.parents[a]

    def join(self, a, b):
        pa, pb = self.find(a), self.find(b)
        if pa == pb:
            return
        if self.sz[pa] > self.size[pb]:
            self.parents[pb] = pa
            self.sz[pa] += self.sz[pb]
        else:
            self.parents[pa] = pb 
            self.sz[pb] += self.sz[pa]

        self.size -= 1



