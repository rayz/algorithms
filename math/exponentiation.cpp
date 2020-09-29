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

long long exp(long long a, long long b){
    if(b == 1){
        return a;
    }
    if(b == 0){
        return 1;
    }
    if(b % 2 == 0){
        return exp(a, b / 2) * exp(a, b/2) % MOD;
    }
    return a * exp(a, b-1) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        cout << exp(a,b) << '\n';
    }

}
