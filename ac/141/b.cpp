#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    bool valid = true;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0){
            if(s[i] == 'L'){
                valid = false;
                break;
            }
        }else{
            if(s[i] == 'R'){
                valid = false;
                break;
            }
        }
    }
    cout << (valid ? "Yes" : "No") << '\n';
}
