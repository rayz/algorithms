#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 500005;
const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int a[MAXN];
int dp[MAXN];



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            dp[i] = 1;
        }
        int ans = 1;
        for(int i = 1; i <= n; i++){
            for(int j = i*2; j <= n; j+=i){
                if(a[j] > a[i]){
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
        }
        for(int i = 1; i <= n; i++){
            ans = max(ans, dp[i]);
        }
        cout << ans << '\n';

    }
}
