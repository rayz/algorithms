#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    string s,t;
    cin >> s >> t;
    int slen = s.size();
    int tlen = t.size();
    int ans = t.size();
    for(int i = 0; i < slen-tlen+1; i++){
        int match = 0;
        for(int j = 0; j < tlen; j++){
            if(s[i+j] == t[j]){
                match++;
            }
        }
        ans = min(ans, tlen - match);
    }
    cout << ans << endl;
}
