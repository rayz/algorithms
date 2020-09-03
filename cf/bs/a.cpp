#include <iostream>
using namespace std;


int arr[100005];
int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        int lo = 0;
        int hi = n-1;
        bool found = false;
        while(lo <= hi){
            int mid = lo + (hi-lo) / 2;
            if(arr[mid] == x){
                cout << "YES" << endl;
                found = true;
                break;
            }
            if(arr[mid] > x){
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        if(!found){
            cout << "NO" << endl;
        }

    }

}
