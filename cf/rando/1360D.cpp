#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll ans = 1;
        for(ll i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                ll c1 = i;
                ll c2 = n / i;
                if(c1 <= k){
                    ans = max(ans, c1);
                }
                if(c2 <= k){
                    ans = max(ans, c2);
                }
            }
        }
        cout << n / ans << '\n';
    }
}
