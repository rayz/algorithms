
"""
Floyd Warshall Implementation for Undirected Graph
Comment line 11 out for directed graph
"""
def floyd_warshall(n, edges):

    dp = [[float('inf')] * n for _ in range(n)]
    for e1, e2 ,cost in edges:
        dp[e1][e2] = cost
        dp[e2][e1] = cost

    for i in range(n):
        dp[i][i] = 0

    for k in range(n):
        for i in range(n):
            for j in range(n):
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j])

    
    for row in dp:
        print(row)



def main():
    floyd_warshall(4, [[0,1,8],[1,2,1],[2,0,4],[0,3,1],[3,2,9],[3,1,2]])


main()
