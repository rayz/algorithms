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

bool sign(int x){
    return x >= 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        long long sum = 0;
        int mx = v[0];
        int i = 0;
        while(i < n){
            mx = v[i];
            int j = i + 1;
            while(j < n && sign(v[i]) == sign(v[j])){
                mx = max(mx, v[j]);
                j++; 
            }
            sum += mx;
            i = j;
        }
        cout << sum << '\n';
    }
}
