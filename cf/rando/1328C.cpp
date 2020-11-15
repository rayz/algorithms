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
        vector<int> one;
        vector<int> two;
        string s;
        cin >> s;
        bool set = false;
        for(auto x: s){
            if(x - '0' == 1){
                if(!set){
                    one.push_back(1);
                    two.push_back(0);
                    set = true;
                }else{
                    one.push_back(0);
                    two.push_back(1);
                }
            }else if (x - '0' == 2){
                if(!set){
                    one.push_back(1);
                    two.push_back(1);
                }else{
                    one.push_back(0);
                    two.push_back(2);
                }
            }else{
                one.push_back(0);
                two.push_back(0);
            }
        }
        for(int i = 0; i < n; i++){
            cout << one[i];
        }
        cout << '\n';
        for(int i = 0; i < n; i++){
            cout << two[i];
        }
        cout << '\n';
    }
}

