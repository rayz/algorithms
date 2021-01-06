#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n % 2 == 1){
        cout << 0 << '\n';
    }else{
        cout << (int)pow(2,n/2) << '\n';
    }
}
