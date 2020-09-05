#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int a,b;
    int count;
    while(t--){
        cin >> a >> b;
        count = 0;
        int diff = abs(a-b);
        int m1 = diff % 10;
        if(m1 != 0){
            diff += (10-m1);
        }
        cout << diff / 10 << endl;
    }
}
