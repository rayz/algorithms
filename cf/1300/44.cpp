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
    int zeros = 0, ones = 0;
    bool valid = false;
    for(auto c: s){
        if(c=='0'){
            zeros++;
            ones=0;
        }else{
            ones++;
            zeros=0;
        }
        if(ones==7 || zeros==7){
            valid=true;
        }
    }
    cout << (valid ? "YES\n" : "NO\n");
}
