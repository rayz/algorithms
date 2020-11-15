#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

bool good(int x){
    return x % 8 == 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        int dig = s[i] - '0';
        if(good(dig)){
            cout << "YES\n";
            cout << dig << '\n';
            return 0;
        }
    }
    for(int i = 0; i < s.length(); i++){
        int dig = s[i] - '0';
        dig *= 10;
        for(int j = i+1; j < s.length(); j++){
            int dig1 = s[j] - '0';
            if(good(dig+dig1)){
                cout << "YES\n";
                cout << dig+dig1;
                return 0;
            }
        }
    }
    for(int i = 0; i < s.length(); i++){
        int dig = s[i] - '0';
        dig *= 100;
        for(int j = i+1; j < s.length(); j++){
            int dig1 = s[j] - '0';
            dig1 *= 10;
            for(int k = j+1; k < s.length(); k++){
                int dig2 = s[k] - '0';
                if(good(dig+dig1+dig2)){
                    cout << "YES\n";
                    cout << dig+dig1+dig2 << '\n';
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";

}
