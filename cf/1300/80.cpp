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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,m;
    cin >> n >> m;
    if(n > m){
        while(m > 0){
            n--;
            m--;
            cout << "B";
            cout << "G";
        }
        while(n--){
            cout << "B";
        }
    }else{
        while(n > 0){
            n--;
            m--;
            cout << "G";
            cout << "B";
        }
        while(m--){
            cout << "G";
        }
    }
    cout << '\n';
}
