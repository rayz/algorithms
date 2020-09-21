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
    int n;
    cin >> n;
    vector<int> v1,v2;
    for(int i = 0; i <n; i++){
        int x;
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }

    sort(v1.begin(),v1.end());
    if(v1 == v2){
        cout << "yes\n";
        cout << 1 << " " << 1 << '\n';
        return 0;
    }
    int left = 0;
    int right = n-1;
    while(left < n){
        if(v2[left] != v1[left]){
            break;
        }
        left++;
    }
    while(right > -1){
        if(v2[right] != v1[right]){
            break;
        }
        right--;
    }

    reverse(v2.begin() + left, v2.begin() + right+1);

    if(v1 != v2){
        cout << "no\n";
    }else{
        cout << "yes\n";
        cout << left+1 << " " << right+1 << "\n";
    }
}
