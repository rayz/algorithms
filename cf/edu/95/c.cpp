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


int go(int i, bool turn, vector<int> &v){
    if(i >= v.size()){
        return 0;
    }
    int skips = 0;
    int ans = v.size()+10;
    if(turn == 0){
        if(v[i] == 1){
            skips++;
        }
        int take = 0;
        if(i+1 < v.size()){
            if(v[i+1] == 1){
                take = skips+1 + go(i+2, 1, v);
                ans = min(take, skips+go(i+1,1,v));
            }
            else{
                ans = min(skips + go(i+1,1,v), skips+go(i+2,1,v));
            }
            return ans;
        }else{
            return skips;
        }
    }else{
        return min(go(i+1, 0, v), go(i+2, 0, v));
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int skips = go(0, 0, v);
        cout << skips << '\n';
        
    }
}
