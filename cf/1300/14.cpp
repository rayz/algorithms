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
    int n;
    cin >> n;
    int mn = 105;
    int mn_idx = 0;
    int mx = 0;
    int mx_idx = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > mx){
            mx = x;
            mx_idx = i;
        }
        if(x <= mn){
            mn = x;
            mn_idx = i;
        }
    }
    int left = (n-1-mn_idx);
    if(mx_idx > mn_idx){
        left--;
    }
    cout << mx_idx +  left << endl;
}
