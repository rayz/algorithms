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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        string s;
        cin >> s;
        if(s == "X++" or s == "++X"){
            ans++;
        }else{
            ans--;
        }
    }
    cout << ans << '\n';
}
