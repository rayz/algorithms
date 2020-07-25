from collections import deque

def top_sort(n, graph):
    indegrees = [0] * n
    dependencies = [[] for _ in range(n)]

    for v1, v2 in graph:
        indegrees[v1] += 1
        dependencies[v2].append(v1)

    q = deque()
    for i in range(n):
        if not indegrees[i]:
            q.append(i)

    res = []
    while q:
        node = q.popleft()
        for j in dependencies[node]:
            indegrees[j] -= 1
            if not indegrees[j]:
                q.append(j)
        res.append(node)

    return res


    

def main():
    print(top_sort(4, [[1,0],[2,0],[3,1],[3,2]]))


main()
    
