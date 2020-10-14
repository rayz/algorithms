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
    long long n;
    cin >> n;
    long long curr = n;
    for(int i = n-1; i > 0; i -= 1){
        cout << 
        curr = (curr + i + 1) / 2;
    }
    cout << curr < '\n';
        

}
