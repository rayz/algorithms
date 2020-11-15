#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    set<ll> s;
    vector<ll> v;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(s.find(i) == s.end()){
                s.insert(i);
                v.push_back(i);
            }
            if(s.find(n/i) == s.end()){
                s.insert(n/i);
                v.push_back(n/i);
            }
        }
    }
    if(s.size() < k){
        cout << -1 << '\n';
    }else{
        sort(v.begin(), v.end());
        cout << v[k-1] << '\n';
    }
        
}
