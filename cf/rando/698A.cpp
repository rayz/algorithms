#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


int dp[105][3];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int k;
        cin >> k;
        dp[i][0] = min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2])) + 1;
        if(k == 1 || k == 3){
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        }else{
            dp[i][1] = dp[i-1][1] + 1;
        }
        if(k == 2 || k == 3){
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        }else{
            dp[i][2] = dp[i-1][2] + 1;
        }
    }
    cout << min(dp[n][0], min(dp[n][1], dp[n][2])) << '\n';

}
