#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x] = i+1;
    }
    for(int i = 1; i <= n; i++){
        cout << m[i] << " ";
    }
    cout << '\n';

}
