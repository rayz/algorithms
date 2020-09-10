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
    int A[105];
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    int i = 0;
    int sm = 0;
    for(int i = 0; i < n && m > 0 && A[i] < 0; i++, m--){
        sm += A[i];
    }
    cout << sm*-1 << '\n';

}
