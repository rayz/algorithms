#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin >> n >> m;
    priority_queue<int> pq;
    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        pq.push(x);
    }
    while(!pq.empty() && m--){
        long long x = pq.top();
        pq.pop();
        pq.push(x/2);
    }
    long long ans = 0;
    while(!pq.empty()){
        long long x = pq.top();
        pq.pop();
        ans += x;
    }
    cout << ans << '\n'; 
}
