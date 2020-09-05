#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,s;
        cin >> n >> s;
        long long count = 0;
        long long temp = 1;
        long long found = 0;
        long long sm = 0;
        long long temp2 = n;
        long long running = 1;
        while(temp2 > 0){
            sm += (temp2 % 10);
            temp2 /= 10;
        }
        while(n > 0 and sm + found > s){
            if((n%10) == 0){
                temp *= 10;
                found = 0;
            }else{
                if(count == 0){
                    count = (10 -n%10) * running;
                }else{
                    count = (10 - n % 10) * running + count;
                }
                sm -= (n % 10);
                found += 1;
            }
            running *= 10;
            n /= 10;
        }
        cout << count << endl;
    }
}
