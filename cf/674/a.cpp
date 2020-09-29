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
        int n,x;
        cin >> n >> x;
        if(n <= 2){
            cout << 1 << '\n';
        }else{
            cout << 1 + ((n-2 + x - 1) / x) << '\n';
        }
    }
}
