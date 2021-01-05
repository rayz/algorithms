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
        int n;
        cin >> n;
        int ones = 0;
        int twos = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 1){
                ones++;
            }else{
                twos++;
            }
        }
        bool valid = false;
        for(int i = 0; i <= ones; i++){
            for(int j = 0; j <= twos; j++){
                int x = i;
                int z = ones-i;
                int y = 2 * j;
                int w = (twos-j)*2;
                if(x+y == z+w){
                    valid = true;
                }
            }
        }
        if(valid){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
