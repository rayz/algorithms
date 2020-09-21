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
    bool valid = false;
    int count = 0;
    while(n--){
        int x,y;
        cin >> x >> y;
        if(x == y){
            count++;
        }else{
            count=0;
        }
        if(count == 3){
            valid = true;
        }
    }
    if(valid){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}
