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
    ll ans = 0;
    vector<ll> v;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        v.push_back(x);
        ans += x;
    }
    if(n <= 1){
        cout << ans << '\n';
        return 0;
    }
    if(n == 2){
        cout << ans * 2 << '\n';
        return 0;
    }
    sort(v.begin(), v.end());
    for(ll i = 0; i < n-2; i++){
        ans += (v[i] * (i+1)); 
    }
    ans += ((n-1)*v[n-1]);
    ans += ((n-1)*v[n-2]);
    cout << ans << '\n';
}
