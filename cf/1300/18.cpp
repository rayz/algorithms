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
    int start;
    cin >> start;
    int mx = start;
    int mn = start;
    for(int i = 1; i < n; i++){
        int next;
        cin >> next;
        if(next > mx || next < mn){
            ans++;
        }
        mx = max(mx, next);
        mn = min(mn, next);
    }
    cout << ans << '\n';
}
