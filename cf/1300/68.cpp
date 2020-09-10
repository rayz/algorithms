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
    getline(cin, s);
    map<char,int> m;
    for(auto c: s){
        m[c]++;
    }
    bool valid=true;
    string s1;
    getline(cin, s1);
    map<char,int> m1;
    for(auto c: s1){
        m1[c]++;
    }
    for(auto &c: m1){
        if(c.first != ' ' && m1[c.first] > m[c.first]){
            valid=false;
            break;
        }
    }
    cout << (valid ? "YES\n" : "NO\n");
}
