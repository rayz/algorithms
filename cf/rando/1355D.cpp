#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        vector<string> v(9);
        for(auto &x: v){
            cin >> x;
        }
        for(auto& x: v){
            for(auto c: x){
                if(c == '1'){
                    cout << '2';
                }else{
                    cout << c;
                }
            }
            cout << '\n';
        }
    }
}
