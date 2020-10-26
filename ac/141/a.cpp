#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if(s == "Sunny"){
        cout << "Cloudy";
    }else if(s == "Cloudy"){
        cout << "Rainy";
    }else{
        cout << "Sunny";
    }
    cout << '\n';
}
