#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int n;
int l;

bool good(vector<int>&v, ll radius, int n){
    ll end = v[0] + radius;
    int cnt = 0;
    for(auto& x: v){
        if(x > end){
            cnt++;
            end = x + radius;
        }
    }
    cout << cnt << " is cnt " << '\n';
    return cnt <= n-1;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> l;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll lo = 0;
    ll hi = 1200000;
    while(lo < hi){
        ll mid = (lo + hi) >> 1;
        if(good(v, mid, n)){
            hi = mid;
        }else{
            lo = mid + 1;
        }
        cout << mid << '\n';
    }
    cout << lo << '\n';
}
