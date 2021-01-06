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
    string s;
    cin >> s;
    map<int,int> m;
    for(int i = 1; i <= 9; i++){
        int x;
        cin >> x;
        m[i] = x;
    }
    int i = 0;
    vector<int> ans;
    while(i < n && s[i]-'0' >= m[s[i]-'0']){
        ans.push_back(s[i]-'0');
        i++;
    }
    while(i < n && m[s[i]-'0'] >= s[i]-'0'){
        ans.push_back(m[s[i]-'0']); 
        i++;
    }
    while(i < n){
        ans.push_back(s[i] - '0');
        i++;
    }
    
    for(auto x: ans){
        cout << x;
    }
    cout << '\n';
}
