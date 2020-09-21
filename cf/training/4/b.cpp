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
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()){
        cout << "NO\n";
    }else{
        bool valid = true;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[s2.size()-i-1]){
                valid = false;
                break;
            }
        }
        if(valid){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
