#include <iostream>

using namespace std;

int arr[100005];

int main(){
    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    while(k--){
        int target;
        cin >> target;
        int lo = -1; // arr[lo] <= target
        int hi = n; // arr[hi] > target
        while(lo + 1 < hi){
            int mid = lo + (hi - lo) / 2;
            if(arr[mid] <= target){
                lo = mid;
            }else{
                hi = mid; 
            }
        }
        cout << hi << endl;

    }
}
