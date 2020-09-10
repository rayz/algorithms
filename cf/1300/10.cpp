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
    int n;
    cin >> n;
    stack<char> stk;
    string s;
    cin >> s;
    int count = 0;
    for(char c : s){
        if(!stk.empty() && stk.top() == c){
            stk.pop();
            count++;
        }
        stk.push(c);
    }
    cout << count << endl;
}
