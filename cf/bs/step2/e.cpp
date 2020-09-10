#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <math.h>
#include <iomanip>

using namespace std;

double c;

bool good(double x){ 
    double temp=( x*x + sqrt(x) ); 
    if(temp-c>0) return 0; 
    else if(temp-c<=0) return 1; 
}


int main(){
    cin >> c;
    double l=0;
    double r=1e10;

    for(int i=0;i<100;i++){
        double mid=(l+r)/2;
        if(good(mid)) {
            l=mid;
        }
        else {
            r=mid;
        }
    }
    cout<<setprecision(20)<<l<<endl;
}
