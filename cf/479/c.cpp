#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int cand = v[k-1];
    if(k-1 == 0){
        if(v[0]-1 < 1){
            cout << -1 << endl;
        }else{
            cout << v[0] - 1 << endl;
        }
        return 0;
    }
    if(k == n){
        cout << v[n-1]+1 << endl;
        return 0;
    }
    if(cand + 1 < v[k]){
        cout << cand + 1 << endl;
    }else{
        cout << -1 << endl;
    }
}
