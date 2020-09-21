#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int seen[100005] = {0};
vector<vector<int>> adj;

int dfs(int node){
    if(adj[node].empty()){
        return 0;
    }
    if(seen[node] == 1){
        return 0;
    }
    int len = 0;
    seen[node] = 1;
    for(int ne: adj[node]){
        len +=  dfs(ne);
    }
    return 1 + len;
}


int main(){
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        adj.push_back(vector<int> ());
    }
    for(int i = 0; i < M; i++){
        int v1, v2;
        cin >> v1 >> v2;
        v1--;
        v2--;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    

    int ans = 0;
    for(int i = 0; i < N; i++){
        int cand = dfs(i);
        ans = max(ans, cand);
    }
    cout << endl;
    cout << ans << endl;

}
