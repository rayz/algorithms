#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> v;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        reverse(v.begin(), v.end());
        for(auto x: v){
            cout << x << " ";
        }
        cout << "\n";

    }
}
