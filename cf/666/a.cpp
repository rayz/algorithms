#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        unordered_map<char, int> count;
        for(int i = 0; i < x; i++){
            string s;
            cin >> s;
            for(auto c: s){
                count[c]++;
            }
        }
        bool valid = true;
        for(auto &c: count){
            if(c.second % x != 0){
                cout << "NO" << endl;
                valid = false;
                break;
            }
        }
        if(valid){
            cout << "YES" << endl;
        }
    }

}
