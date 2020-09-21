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
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<long long> v;
        cin >> n;
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            v.push_back(x);
        }
        long long ans = 0;
        sort(v.begin(), v.end());
        ans = v[0]*v[1]*v[2]*v[3]*v[n-1];
        ans = max(ans,v[0]*v[1]*v[n-1]*v[n-2]*v[n-3]);
        ans = max(ans,v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5]);
        cout << ans << '\n';
    }
}
