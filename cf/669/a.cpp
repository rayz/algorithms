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
        int zeros = 0, ones = 0;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 0){
                zeros++;
            }else{
                ones++;
            }
        }
        if(zeros >= n/2){
            cout << zeros << "\n";
            for(int i = 0; i < zeros; i++)
                cout << '0' << ' ';
        }else{
            if(ones & 1)
                ones--;
            cout << ones << '\n';
            for(int i = 0; i < ones; i++)
                cout << '1' << ' ';
        }
        cout << '\n';
            
    }
}
