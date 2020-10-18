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
    int n,q;
    cin >> n;
    vector<long long> v1;
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        v1.push_back(x);
    }
    vector<long long> v2(v1);
    sort(v2.begin(), v2.end());
    for(int i = 1; i < n; i++){
        v1[i] += v1[i-1];
        v2[i] += v2[i-1];
    }
    cin >> q;
    while(q--){
        int type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;
        if(type == 1){
            cout << (l > 0 ? v1[r] - v1[l-1] : v1[r]) << '\n';
        }else{
            cout << (l > 0 ? v2[r] - v2[l-1] : v2[r]) << '\n';
        }
    }

}
