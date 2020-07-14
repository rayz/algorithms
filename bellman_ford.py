

def bellman_ford(n, graph, k):
    """
    Dijkstra algorithm to find shortest path from source 
    
    Parameters:
        n (int): # of nodes
        Graph (2darray): v1, v2, cost
        K (int): source node

    Returns:
        dist (dict): contains the shortest path to each node from K
    """

    dist = [float('inf') for _ in range(n)]
    dist[k] = 0
    for _ in range(n-1):
        for v1, v2, cost in graph:
            if dist[v1] + cost < dist[v2]:
                dist[v2] = dist[v1] + cost
            if dist[v2] + cost < dist[v1]:
                dist[v1] = dist[v2] + cost

    return dist


def main():
    path = bellman_ford(5, [[0,1,3],[1,4,1],[4,3,7],[3,2,2],[2,0,1],[1,2,7],[1,3,5]], 4)
    print(path)


main()
