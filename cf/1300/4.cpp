#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> v;
    stack<char> stk;
    for(char c: s){
        if(c == '-'){
            if(!stk.empty() && stk.top() == '-'){
                stk.pop();
                v.push_back(2);
            }else{
                stk.push(c);
            }
        }
        if(c == '.'){
            if(!stk.empty() && stk.top() == '-'){
                stk.pop();
                v.push_back(1);
            }else{
                stk.push(c);
                v.push_back(0);
            }
        }
    }
    for(int x: v){
        cout << x;
    }
    cout << endl;
}




