#include <iostream>
#include <algorithm>

using namespace std;

long long w,h,n;

bool can_fit(long long side){
    long long fit_width = side / w;
    long long fit_height = side / h;
    long long fit = fit_width * fit_height;
    return (fit >= n);
}

int main(){
    cin >> w >> h >> n;
    long long lo = 0;
    long long hi = 1;
    while(!can_fit(hi)) hi *= 2;


    while(lo + 1 < hi){
        long long mid = lo + (hi - lo) / 2;
        if(can_fit(mid)){
            hi = mid; 
        }else{
            lo = mid; 
        }
    }
    cout << hi << endl; 

}
