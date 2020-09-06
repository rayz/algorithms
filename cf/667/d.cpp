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

int ds(long long n){
    int sm = 0;
    while(n){
        sm += (n%10);
        n /= 10;
    }
    return sm;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,s;
        cin >> n >> s;
        long long curr = n;
        long long count = 0;
        long long running = 1;
        while(ds(n) > s){
            int digit = (n / running) % 10;
            long long add = running * ((10-digit)%10);
            count += add;
            n += add;
            running *= 10; 
        }
        cout << count << endl;
    }
}
