#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

ll dp[20][4][2][2];

ll solve(string& R, int n, int non_zero, bool leading, bool tight){
    if(n==0){
        return 1;
    }
    if(dp[n][non_zero][leading][tight] != -1){
        return dp[n][non_zero][leading][tight];
    }
    ll ans = 0;
    int ub = tight ? (R[R.length()-n] - '0') : 9;
    for(int i = 0; i <= ub; i++){
        if(i == 0){
            if(leading){
                ans += solve(R, n-1, non_zero, true, (tight & (0 == ub)));
            }else{
                ans += solve(R, n-1, non_zero, false, (tight & (i == ub)));
            }
        }else{
            if(non_zero != 3){
                ans += solve(R, n-1, non_zero+1, false, (tight & (i == ub)));
            }
        }
    }
    return dp[n][non_zero][leading][tight] = ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll L,R;
        cin >> L >> R;
        L--;
        string l = to_string(L);
        string r = to_string(R);
        memset(dp, -1, sizeof(dp));
        ll right = solve(r,r.length(),0,true,true);
        memset(dp, -1, sizeof(dp));
        ll left = solve(l,l.length(),0,true,true);
        cout << right - left << '\n';
    }
}
