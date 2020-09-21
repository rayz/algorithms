#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    while(k > 0){
        int digit = n % 10;
        if(digit == 0){
            n /= 10;
            k -= 1;
            continue;
        }else{
            int subtract = min(digit, k);
            n -= subtract;
            k -= subtract;
        }
    }
    cout << n << endl;
}

