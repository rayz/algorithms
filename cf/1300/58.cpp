#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <math.h>
#include <iomanip>

using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    bool h=false,e=false,l=false,ll=false,o=false;
    for(auto c: s){
        if(c=='h' && !h){
            h = true;
        }else if(c=='e' && h && !e){
            e = true;
        }else if(c== 'l' && e && !l){
            l = true;
        }else if(c== 'l' && l && !ll){
            ll = true;
        }else if(c== 'o' && ll && !o){
            o = true;
        }
    }
    if(h&&e&&l&&ll&&o){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
