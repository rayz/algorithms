#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float n,x,t;
    cin >> n >> x >> t;
    cout << fixed  << setprecision(0) << ceil(n/x) * t << endl;

}
