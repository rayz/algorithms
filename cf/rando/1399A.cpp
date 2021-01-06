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
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &x : v){
            cin >> x;
        }
        sort(v.begin(), v.end());
        bool valid = true;
        for(int i = 1; i < n; i++){
            if(v[i] - v[i-1] > 1){
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES\n" : "NO\n");
    }
}
