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

int main(){
    int n;
    cin >> n;
    int change = 0;
    int arr[105];
    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    for(int i = 0; i < n; i++){
        change += (mx - arr[i]);
    }
    cout << change << endl;

}
