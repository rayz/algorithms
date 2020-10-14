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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> m;
    vector<int> v;
    for(auto c : s){
        m[c] += 1;
    }
    for(auto c : m){
        v.push_back(c.second);
    }
    sort(v.rbegin(), v.rend());
    long long ret = 0;
    for(int i = 0; i < v.size(); i++){
       long long take = min(v[i], k);
       ret += (take * take);
       k -= take;
       if(k == 0){
           break;
       }
    }
    cout << ret << '\n';
}
