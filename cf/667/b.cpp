#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long a,b,x,y,n;

    while(t--){
        cin >> a >> b >> x >> y >> n;
        
        long long froma = a-x;
        long long fromb = b-y;

        //remove a first
        long long t1 = n;
        long long a1 = a;
        long long b1 = b;
        long long m1 = min(froma, t1);
        t1 -= m1;
        a1 -= m1;
        long long m2 = min(fromb, t1);
        b1 -= m2;
        t1 -= m2;

        long long ans = a1 * b1;


        long long m3 = min(fromb, n);
        b -= m3;
        n -= m3;

        long long m4 = min(froma, n);
        a -= m4;
        n -= m4;

        ans = min(ans, a * b);
        cout << ans << endl;


        

    }
}
