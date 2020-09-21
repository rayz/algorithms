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
    int t;
    cin >> t;
    while(t--){
        
        int n;
        int A[105];
        cin >> n;
        for(int i = 0; i <= n; i++){
            A[i] = 0;
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            A[x]++; 
        }
        int count = 0;
        int total = 0;
        for(int i = 0; i <= n; i++){
            if(A[i] == 0){
                total += i;
                break;
            }
        }
        for(int i = 0; i <= n; i++){
            if(A[i] < 2){
                total += i;
                break;
            }
        }
        cout << total << '\n';
    }
    return 0;
}
