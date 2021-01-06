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
    int n; cin >> n;
    priority_queue <int, vector<int>, greater<int> > pq;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    ll total = 0;
    while(!pq.empty()){
        ll x = pq.top();
        if(x >= total){
            ans++;
            total+=x;
        }
        pq.pop();
    }
    cout << ans << '\n';
}
