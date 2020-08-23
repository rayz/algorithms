#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int dp[n]; 
    for(auto i = 0; i < n; ++i){
        int x;
        cin >> x;
        arr[i] = x;
    }
    dp[0] = 0; 
    dp[1] = abs(arr[1] - arr[0]); 
    for(auto i = 2; i < n; ++i){
        dp[i] = min(dp[i-1] + abs(arr[i] - arr[i-1]), dp[i-2] + abs(arr[i] - arr[i-2]));
    }
    
    cout << dp[n-1] << endl;


}
