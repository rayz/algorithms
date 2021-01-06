#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v){
        cin >> x;
    }
    int ans = 1;
    int curr = 1;
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++){
        if(v[i] == curr) continue;
        if(v[i] < curr) break;
        curr++;
        ans++;
    }
    cout << ans << '\n';
}
