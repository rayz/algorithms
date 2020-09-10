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
    long long n;
    cin >> n;
    int count = 0;
    int digit = 0;
    while(n > 0){
        digit = n % 10;
        n /= 10;
        if(digit == 4 || digit == 7){
            count += 1;
        }
    }
    cout << ((count == 4 || count == 7) ? "YES\n" : "NO\n");
}
