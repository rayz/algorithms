
"""
Floyd Warshall Implementation for Undirected Graph
Comment line 11 out for directed graph
"""
def floyd_warshall(n, edges):

    dp = [[float('inf')] * n for _ in range(n)]
    for v1, v2 ,cost in edges:
        dp[v1][v2] = cost
        dp[v2][v1] = cost

    for i in range(n):
        dp[i][i] = 0

    #relaxation
    for k in range(n):
        for i in range(n):
            for j in range(n):
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j])

    
    for row in dp:
        print(row)



def main():
#                     v1,v2,cost 
    floyd_warshall(4, [[0,1,8],[1,2,1],[2,0,4],[0,3,1],[3,2,9],[3,1,2]])


main()
