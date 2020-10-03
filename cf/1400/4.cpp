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
    int n;
    cin >> n;
    if(n <= 10 || n > 21){
        cout << 0 << '\n';
    }else{
        int target = n -  10;
        if(target == 10){
            cout << 15 << '\n';
        }else{
            cout << 4 << '\n';
        }
    }
}
