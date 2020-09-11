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
int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int seen[n];
        int cg = 0;
        int mi = 0;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
            seen[i] = 0;
            if(v[i] > v[mi]){
                mi = i;
            }
        }
        cg = v[mi];
        seen[mi] = 1;
        cout << cg << ' ';
        for(int i = 0; i < n-1; i++){
            int curr = 0;
            int idx = 0;
            for(int j = 0; j < n; j++){
               if(!seen[j] && gcd(cg, v[j]) > curr){
                   curr = gcd(cg, v[j]);
                   idx = j;
               }
            }
            seen[idx] = 1;
            cg = curr;
            cout << v[idx] << " ";
        }
        cout << '\n';
    }
}
