from heapq import heappush, heappop
from collections import defaultdict

def dijkstra(N, graph, K):
    """
    Dijkstra algorithm to find shortest path from source 
    
    Parameters:
    N (int): # of nodes
    Graph (2darray): v1, v2, cost
    K (int): source node

    Returns:
    dist (dict): contains the shortest path to each node from K
    
    """

    weight = defaultdict(dict)
    for u, v, w in graph:
        weight[u][v] = w
        weight[v][u] = w

    heap = [(0, K)]
    dist = {}
    while heap:
        cost, u = heappop(heap)
        if u not in dist:
            dist[u] = cost 
            for v in weight[u]:
                heappush(heap, (dist[u] + weight[u][v], v))

    return dist 




def main():
    path = dijkstra(5, [[0,1,3],[1,4,1],[4,3,7],[3,2,2],[2,0,1],[1,2,7],[1,3,5]], 4)
    print(path)

main()
