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
    int mx = 0;
    int curr = 0;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        curr -= a;
        curr += b;
        mx = max(mx, curr);
    }
    cout << mx << '\n';

}
