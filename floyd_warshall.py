
def floyd_warshall(n, graph):
    """
    Floyd Warshall Implementation for Undirected Graph
    Parameters:
        n: # of nodes
        graph: [[v1,v2,cost] ... ]
    
    Return:
        dp: matrix containing all pair shortest paths
    """

    dp = [[float('inf')] * n for _ in range(n)]
    for v1, v2 ,cost in graph:
        dp[v1][v2] = cost
        dp[v2][v1] = cost

    for i in range(n):
        dp[i][i] = 0

    #relaxation
    for k in range(n):
        for i in range(n):
            for j in range(n):
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j])

    
    return dp


def main():
    dp = floyd_warshall(4, [[0,1,8],[1,2,1],[2,0,4],[0,3,1],[3,2,9],[3,1,2]])
    
    for row in dp:
        print(row)


main()
