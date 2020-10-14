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
        int a,b,c;
        int ans = 0;
        cin >> a >> b >> c;
        while(b > 0 && c > 1){
            b -= 1;
            c -= 2;
            ans += 3;
        }
        while(a > 0 && b > 1){
            b -= 2;
            a -= 1;
            ans += 3;
        }
        cout << ans << '\n';
    }
}
