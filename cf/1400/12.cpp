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
    long long ans = -2000000005;
    for(int i = 0; i < n; i++){
        long long f , t;
        cin >> f >> t;
        if(t <= k){
            ans = max(ans, f);
        }else{
            ans = max(ans, f-(t-k));
        }
    }
    cout << ans << '\n';
}
