#include <iostream>

using namespace std;

int main(){
    unsigned long long  n;
    cin >> n;
    unsigned long long sum = 0;
    while(n){
        sum += (n%10);
        n /= 10;
    }
    cout << (sum % 9 == 0? "Yes":"No") << endl;
}
