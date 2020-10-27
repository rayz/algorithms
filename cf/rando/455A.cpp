#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


int N;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    vector<ll>a(100005,0);
    ll maxi = 0;
    for(ll i = 0; i < N; i++){
        ll x;
        cin >> x;
        a[x]++;
        maxi = max(maxi, x);
    }
    vector<ll>dp(100005,0);
    dp[1] = a[1];
    for(ll i = 2; i <= 100000; i++){
        dp[i] = max(dp[i-1], (a[i]*i)+ dp[i-2]);
    }
    cout << dp[maxi] << '\n';
}
