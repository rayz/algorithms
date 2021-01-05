#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
 

void solve1(){
    int n; 
    cin >> n;
    vector<ll> v;
    vector<ll> dp(n+1, 0);
    ll ans = -1;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    for(ll i = 0; i < n; i++){
        if(i + v[i] > n-1){
            ans = max(ans, dp[i] + v[i]);
        }else{
            dp[i+v[i]] = max(dp[i+v[i]], dp[i] + v[i]);
        }
    }
    cout << ans << '\n';
}

 
void solve2(){
    int n; 
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v){
        cin >> x;
    }
    for(int i = n-1; i >= 0; i--){
        if(i + v[i] > n-1) continue;
        v[i] += v[i+v[i]];
    }
    cout << *max_element(v.begin(), v.end()) << '\n';
}

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve2(); 
    }
}
