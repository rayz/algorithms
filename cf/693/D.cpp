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
        int sz; cin >> sz;
        vector<ll> evens;
        vector<ll> odds;
        ll alice = 0;
        ll bob = 0;
        for(int i = 0; i < sz; i++){
            ll x; cin >> x;
            if(x % 2 == 0){
                evens.push_back(x);
            }else{
                odds.push_back(x);
            }
        }
        sort(evens.rbegin(), evens.rend());
        sort(odds.rbegin(), odds.rend());
        int i = 0;
        int j = 0;
        int n = evens.size();
        int m = odds.size();
        while(i < n || j < m){
            // alice turn
            if(i < n){
                if(evens[i] > odds[j]){
                    alice += evens[i];
                    i++;
                }else{
                    j++;
                }
            }else{
                j++;
            }
            cout << "here ";
            if(!(i < n || j < m)){
                break;
            }
            if(j < m){
                if(odds[j] > evens[i]){
                    bob += odds[j];
                    j++;
                }else{
                    i++;
                }
            }else{
                i++;
            }
            if(!(i < n || j < m)){
                break;
            }
        }
        if(alice == bob){
            cout << "TIE\n";
        }else if(alice > bob){
            cout << "ALICE\n";
        }else{
            cout << "BOB\n";
        }
    }
}
