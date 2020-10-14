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
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<long long> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.rbegin(), v.rend());
        if(n == 1){
            cout << 0 << '\n';
        }else{
            long long ans = 0;
            for(int i = 0; i<=k; i++){
                ans += v[i];
            }
            cout << ans << '\n';
        }
    }
}
