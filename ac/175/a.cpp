#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int rainy = 0;
    int ans =0;
    for(auto&c: s){
        if(c=='R'){
            rainy++;
        }else{
            rainy=0;
        }
        ans = max(ans, rainy);
    }
    cout << ans << endl;
}
