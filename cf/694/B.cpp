#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            int val; cin >> val;
            v.push_back({val,1});
        }
        int i = 0;
        while(i < v.size()){
            int val = v[i].first;
            int cnt = v[i].second;
            if(val % x == 0){
                v.push_back({val/x, cnt*x});
            }else{
                break;
            }
            i++;
        }
        ll total = 0;
        for(auto [val,cnt]: v){
            total += (val*cnt);
        }
        cout << total << '\n';
    }
}
