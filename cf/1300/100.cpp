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
    int a,b,n;
    cin >> a >> b >> n;
    bool valid = false;
    while(n){
        if(a % b == 0){
            cout << a;
            for(int i = 0; i < n; i++){
                cout << '0'; 
            }
            cout << '\n';
            n = 0;
            valid = true;

        }else{
            a *= 10;
            for(int i = 0; i <= 9; i++){
                if((a+i) % b == 0){
                    a += i;
                    valid = true;
                    n--;
                    if(n == 0){
                        cout << a << '\n';
                    }
                    break;
                }
            }
        }
        if(!valid){
            break;
        }
    }
    if(!valid){
        cout << -1 << '\n';
    }

}
