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
        ll w, h, n;
        cin >> w >> h >> n;
        if(n == 1){
            cout << "YES\n";
        }else{
            ll ans = 1;
            while(w % 2 == 0){
                w /= 2;
                ans *= 2;
            }
            while(h % 2 == 0){
                h /= 2;
                ans *= 2;
            }
            cout << (ans >= n ? "YES\n" : "NO\n");
        }

    }
}
