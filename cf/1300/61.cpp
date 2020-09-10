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
    long long n;
    cin >> n;
    long long mx = 0;
    long long mn = 1000000005;
    long long A[200005];
    for(int i = 0; i < n; i++){
        cin >> A[i];
        mx = max(mx, A[i]);
        mn = min(mn, A[i]);
    }
    long long t1 = 0, t2 = 0;
    for(int i = 0; i < n; i++){
        t1 += (A[i] == mn);
        t2 += (A[i] == mx);
    }
    cout << mx - mn << " ";
    if(mn == mx){
        cout << t1 * (t1-1) / 2 << '\n'; 
    }else{
        cout << t1 * t2 << '\n';
    }


}
