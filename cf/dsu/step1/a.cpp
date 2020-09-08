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

int parents[100005];
int sz[100005];

void init(int N){
    for(int i = 0; i <= N; i++){
        parents[i] = i;
        sz[i] = 1;
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
    if(sz[pb] > sz[pa]){
        swap(pa,pb);
    }
    sz[pa] += sz[pb];
    parents[pa] = parents[pb];
    return true;
    
}

int main(){
    int n,m;
    cin >> n >> m;
    init(n);
    while(m--){
        string op;
        cin >> op;
        int v1, v2;
        cin >> v1 >> v2;
        if(op == "union"){
            join(v1, v2);
        }else{
            if(op == "get"){
                if(find(v1) == find(v2)){
                    cout << "YES\n";
                }else{
                    cout << "NO\n";
                }
            }
        }
    }
}
