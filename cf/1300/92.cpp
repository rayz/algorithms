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
    set<int> unique;
    int n,m;
    cin >> n >> m;
    int arr[100005];
    int ans[100005];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = n-1; i > -1; i--){
        unique.insert(arr[i]);
        ans[i] = unique.size();
    }
    for(int i = 0; i < m; i++){
        int q;
        cin >> q;
        cout << ans[q-1] << '\n';
    }
}
