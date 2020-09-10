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
    string s1,s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++)
        cout << (s1[i] ^ s2[i]);
    cout << endl;
}
