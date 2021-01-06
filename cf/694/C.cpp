#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> friends(n);
        vector<int> presents(m);
        for(auto &f: friends){
            cin >> f;
        }
        for(auto &p : presents){
            cin >> p;
        }
        ll ans = 0;
        sort(rall(friends));
        int i;
        for(i = 0; i < min(n,m); i++){
            if(presents[friends[i]-1] > presents[i]){
                ans += presents[i];
            }else{
                ans += presents[friends[i]-1];
            }
        }
        while(i < n){
            ans += presents[friends[i]-1];
            i++;
        }
        cout << ans << '\n';
    }
     
}
