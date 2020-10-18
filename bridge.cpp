#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <math.h>
#include <iomanip>

using namespace std;

const long long MOD = 1e9 + 7;

vector<pair<int, int>> edges;
int low[100005];
int tin[100005];
int visited[1000005];
vector<int> adj[100005];
bool hasBridge;
int timer;


void dfs(int v, int p = -1){
    visited[v] = 1;
    tin[v] = low[v] = timer++; 
    for(int child : adj[v]){
        if(child == p){
            continue;
        }
        if(visited[child]){
            low[v] = min(low[v], tin[child]);
            if(tin[v] > tin[child]){
                edges.push_back({v, child});
            }
        }else{
            dfs(child, v);
            if(low[child] > tin[v]){
                hasBridge = true;
                return;
            }
            low[v] = min(low[v], low[child]);
            edges.push_back({v, child});
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    while(m--){
        int v1, v2;
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    dfs(1,-1);
    if(hasBridge){
        cout << 0 << '\n';
    }else{
        for(auto p: edges){
            cout << p.first << ' ' << p.second << '\n';
        }
    }
}
