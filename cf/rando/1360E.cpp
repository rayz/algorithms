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
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++){
            string row;
            cin >> row;
            for(int j = 0; j < n; j++){
                int x = row[j] - '0';
                v[i][j] = x;
            }
        }
        bool valid = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(v[i][j] == 1){
                    if(i+1 < n && v[i+1][j]) continue;
                    if(j+1 < n && v[i][j+1]) continue;
                    if(i == n-1 || j == n-1) continue;
                    valid = false;
                }
            }
        }
        cout << (valid ? "YES\n" : "NO\n");
    }

}
