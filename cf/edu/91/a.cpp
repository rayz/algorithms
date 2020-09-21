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
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i <n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool valid = false;
        for(int i = 1; i < n-1; i++){
            bool left_small = false;
            bool left_idx = -1;
            bool right_small = false;
            bool right_idx = -1;
            int left = i-1;
            int right = i+1;
            while(left >= 0){
                if(!left_small && v[left] < v[i]){
                    left_small = true; 
                    left_idx = left;
                    break;
                }
                left--;
            }
            while(right < n-1){
                if(!right_small && v[right] < v[i]){
                    right_small = true;
                    right_idx = right;
                    break;
                }
                right++;
            }
            if(left_small && right_small){
                valid = true;
                cout << left_idx << " " << i << " " << right_idx << endl;
                break;
            }
        }
        if(!valid){
            cout << "NO\n";
        }
    }
}
