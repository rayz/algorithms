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
       int A[3];
       cin >> A[0] >> A[1] >> A[2];
       sort(A, A+3);
       int ans = 0;
       ans += min(A[0], A[2]);
       A[2] -= A[0];
       ans += min(A[1], A[2]);
       cout << ans << '\n';
    }
}
