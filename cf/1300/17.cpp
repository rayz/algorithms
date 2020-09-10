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
    int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        l += x;
        r += y;
    }
    cout << min(l, n-l) + min(r, n-r) << endl;

}
