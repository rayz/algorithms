#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

ll dp[20][2][2][10000];

// digit sum
ll solve(string& R, int n, bool leading, bool tight, ll curr_sum){
    if(n == 0){
        return curr_sum;
    }
    if(dp[n][leading][tight][curr_sum] != -1){
        return dp[n][leading][tight][curr_sum];
    }
    int ub = tight ? (R[R.length()-n] - '0') : 9;

    ll ans = 0;
    if(leading){
        ans += solve(R, n-1, leading, tight&(0==ub), curr_sum);
    }
    for(int i = 0; i <= ub; i++){
        if(i == 0 && leading){
            continue;
        }
        ans += solve(R, n-1, false, tight&(i==ub), curr_sum+i);
    }
    return dp[n][leading][tight][curr_sum] = ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll a;
        string B;
        cin >> a >> B;
        if(a>0)a--;
        string A = to_string(a);
        memset(dp, -1, sizeof(dp));
        ll bans = solve(B, B.length(), true, true, 0);
        memset(dp, -1, sizeof(dp));
        ll aans = solve(A, A.length(), true, true, 0);
        cout << bans - aans << '\n';
    }
}
