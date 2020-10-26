#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k, q;
    cin >> n >> k >> q;
    map<int,int> m;

    for(int i = 0; i < q; i++){
        long long x;
        cin >> x;
        m[x] += 1;
    }
    for(int i = 1; i <= n; i++){
        if(m[i] - q + k <= 0){
            cout << "No\n";
        }else{
            cout << "Yes\n";
        }
    }
}
