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
 
int parents[300005];
int sz[300005];
int mn[300005];
int mx[300005];
 
void init(int N){
    for(int i = 0; i <= N; i++){
        parents[i] = i;
        sz[i] = 1;
        mx[i] = i;
        mn[i] = i;
    }
}
 
int find(int a){
    if(parents[a] != a){
        parents[a] = find(parents[a]);
    }
    return parents[a];
}
 
bool join(int a, int b){
    int pa = find(a);
    int pb = find(b);
    if(pa == pb){
        return false;
    }
    if(parents[pa] > parents[pb]){
        parents[pb] = pa;
        mx[pa] = max(mx[pa], mx[pb]);
        mn[pa] = min(mn[pa], mn[pb]);
        sz[pa] += sz[pb];
    }else{
        parents[pa] = pb;
        mx[pb] = max(mx[pb], mx[pa]);
        mn[pb] = min(mn[pb], mn[pa]);
        sz[pb] += sz[pa];
    }
 
    return true;
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    init(n);
    while(m--){
        string op;
        cin >> op;
        if(op == "union"){
            int v1,v2;
            cin >> v1 >> v2;
            join(v1, v2);
        }else if(op == "get"){
            int v1;
            cin >> v1;
            cout << mn[find(v1)] << " " << mx[find(v1)] << " " << sz[find(v1)] << "\n";
        }
    }
}
