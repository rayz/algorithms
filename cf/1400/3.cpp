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
    string a,b;
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++){
        int x = (int)a[i];
        int y = (int)b[i];
        cout << (x ^ y);
    }
    cout << '\n';
}
