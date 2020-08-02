class Trie:
    def __init__(self):
        self.trie = {}


    def add(self, word):
        curr = self.trie
        for w in word:
            if w not in curr:
                curr[w] = {}
            curr = curr[w]
        curr['*'] = True


    def in_trie(self, word):
        curr = self.trie
        for w in word:
            if w not in curr:
                return False
            curr = curr[w]
        return '*' in curr
