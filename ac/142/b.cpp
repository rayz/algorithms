#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    int ans = 0;
    while(n--){
        int x;
        cin >> x;
        ans += (x >= k);
    }
    cout << ans << '\n';
}
