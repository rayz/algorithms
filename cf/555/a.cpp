#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int x;
    cin >> x;

    unordered_set<int> s;

    while(s.find(x) == s.end()){
        s.insert(x);
        x++;
        while(x % 10 == 0){
            x /= 10;
        }
    }

    cout << s.size() << endl;


}
