#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll negs = 0;
    ll ans = 0;
    ll zeros = 0;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x < 0){
            negs++;
        }
        if(x == 0){
            zeros++;
        }
        ans += (abs(1-x));
    }
    ans -= (4 * (negs / 2));
    if(negs % 2 == 1){
        if(zeros > 0){
            ans -= 2;
        }
    }
    cout << ans << '\n';
}
