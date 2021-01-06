#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char,int> m;
    for(char c: s){
        m[c]++;
    }
    int odds = 0;
    for(auto p : m){
        if(p.second & 1)
            odds++;
    }
    if(odds <= 1){
        cout << "First\n";
    }else{
        if(odds & 1){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
    }
}
