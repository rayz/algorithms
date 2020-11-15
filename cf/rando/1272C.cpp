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

long long sm(long long x){
    return (x * (x+1)) / 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> can_use;
    while(k--){
        char c;
        cin >> c;
        can_use.insert(c);
    }
    long long total = 0;
    long long curr = 0;
    for(auto c: s){
        if(can_use.find(c) != can_use.end()){
            curr++;
        }else{
            total += sm(curr);
            curr = 0;
        }
    }
    total += sm(curr);
    cout << total << '\n';

}
