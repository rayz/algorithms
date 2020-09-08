#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>

using namespace std;

int parents[1000005];
int mx[1000005];

void init(int n){
    for(int i = 1; i <= n+1; i++){
        parents[i] = i;
        mx[i] = i;
    }
}

int find(int a){
    if(a == -1){
        return -1;
    }
    if(parents[a] != a){
        parents[a] = find(parents[a]);
    }
    mx[a] = max(mx[a], mx[parents[a]]);
    return parents[a];
}

bool join(int a, int b){
    int pa = find(a);
    int pb = find(b);
    if(pa==pb){
        return false;
    }
    parents[pa] = pb;
    mx[pa] = max(mx[pa], mx[parents[pa]]);
    return true;
}

int main(){
    int n,m;
    cin >> n >> m;
    init(n);
    while(m--){
        char op;
        int person;
        cin >> op >> person;
        if(op == '?'){
            int cand = mx[person];
            if(cand != n+1){
                cout << cand << endl;
            }else{
                cout << -1 << endl;
            }
        }else if(op == '-'){
            join(person, person+1);
            mx[person] = max(mx[person], mx[parents[person]]);
        }
    }
}
