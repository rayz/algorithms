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
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if(arr[mid] > target){
                hi =mid-1;
            }else{
                lo=mid+1;
            }
        }
        cout << hi+1 << endl;

    }
}
