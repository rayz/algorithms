#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


bool div4(int n){
    return n % 4 == 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    auto n = s.length();
    if(s.length() == 1){
        if(div4(s[0] - '0')){
            cout << 4 << '\n';
        }else{
            cout << 0 << '\n';
        }
    }else{
        int fst = s[n-2] - '0';
        fst *= 10;
        fst += (s[n-1] - '0');
        if(div4(fst)){
            cout << 4 << '\n';
        }else{
            cout << 0 << '\n';
        }
    }
}
