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
    int n;
    cin >> n;
    vector<int> fst;
    vector<int> snd;
    bool inc = true;
    bool dec = true;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        fst.push_back(s[i] - '0');
    }
    for(int i = n; i < n*2; i++){
        snd.push_back(s[i] - '0');
    }
    sort(fst.begin(), fst.end());
    sort(snd.begin(), snd.end());
    for(int i = 0; i < n; i++){
        if(fst[i] >= snd[i]){
            dec = false;
        }
        if(fst[i] <= snd[i]){
            inc = false;
        }
    }
    if(inc || dec){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }





    

}
