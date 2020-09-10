#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(i == 0){
            cout << (char)toupper(s[i]);
        }else{
            cout << s[i];
        }
    }
    cout << endl;
}
