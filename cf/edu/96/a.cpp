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


    int solve(int n){
    int x,y,z;
    x = y = z = 0;
    int i,j,k;
    i = j = k = 0;
    for(int i = 0; i <= n / 3; i++){
        for(int j = 0; j <= n / 5; j++){
            for(int k = 0; k <= n / 7; k++){
                if(i*3 + j*5 + k*7 == n){
                    x = i;
                    y = j;
                    z = k;
                    cout << x << " " << y << " " << z << '\n';
                    return 0;
                }
            }
        }
    }
    cout << -1 << '\n';
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        solve(n);
    }
}
