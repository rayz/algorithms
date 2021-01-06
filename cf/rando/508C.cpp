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
    vector<pair<ll,ll>> v;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back({x,0});
    }
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back({x,1});
    }
    sort(rall(v));
    ll fst = 0;
    ll snd = 0;
    int turn = 0;
    for(auto [amt, t]: v){
        if(turn == 0){
            if(t == 0){
                fst += amt;
            }
        }else if(turn == 1){
            if(t == 1){
                snd += amt;
            }
        }
        turn = 1 - turn;
    }
    cout << fst - snd << '\n';
}
