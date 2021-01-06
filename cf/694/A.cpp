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
        ll n,x;
        cin >> n >> x;
        ll total = 0;
        ll mx = 0;
        for(int i = 0; i < n; i++){
            ll v;
            cin >> v;
            total += v;
            mx += ((v+x-1)/x);
        }
        cout << (total+x-1)/x << " " << mx << '\n';
    }
}
