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
    int n,k;
    int A[200005];
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int left = 0, right = 0;
    long long curr = 0;
    int ans = 0;
    long long mn = 1e12;
    while(right < n){
        curr += A[right];
        if(right-left+1 > k){
            curr -= A[left];
            left++;
        }
        if(right-left+1 == k){
            if(curr < mn){
                mn = curr;
                ans = left;
            }
        }

        right++;
    }
    cout << ans+1 << '\n';
    


}
