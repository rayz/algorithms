#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int pos = n-1;
        while(pos > 0 && v[pos] <= v[pos-1]){
            pos--;
        }
        while(pos > 0 && v[pos] >= v[pos-1]){
            pos--;
        }
        cout << pos << '\n';
    }
}
