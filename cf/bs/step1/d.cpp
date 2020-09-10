#include <iostream>
#include <algorithm>

using namespace std;

int arr[100005];

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int k;
    cin >> k;
    while(k--){
        int lowerbound, higherbound;
        cin >> lowerbound >> higherbound;

        int lo = -1;
        int hi = n;
        while(lo + 1 < hi){
            int mid = lo + (hi-lo) / 2;
            if(arr[mid] <= higherbound){
                lo = mid;
            }else{
                hi = mid;
            }
        }
        int left = hi;


        lo = -1;
        hi = n;
        while(lo + 1 < hi){
            int mid = lo + (hi-lo) / 2;
            if(arr[mid] < lowerbound){
                lo = mid;
            }else{
                hi = mid;
            }
        }
        cout << left - hi << endl;
    }
}
