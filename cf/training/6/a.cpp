#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>

using namespace std;

int arr[100005];

int main(){
    int n,z;
    cin >> n >> z;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int count = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] - arr[i-1] <= z){
            count++;
        }else{
            count = 1;
        }
    }
    cout << count << endl;
}
