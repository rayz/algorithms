#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long gcd(long long a, long long b){
    return (b == 0 ? a : gcd(b, a % b));
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b;
    cin >> a >> b;
    long long  g = gcd(a,b);
    long long  ans = 1;
    bool flag = true;
    for(long long i = 2; i * i <= g; i++){
        while(g % i == 0){
            if(flag){
                ans++;
                flag = false;
            }
            g /= i;
        }
        flag = true;
    }
    if(g > 1){
        ans++;
    }
    cout << ans << '\n';
    
}
