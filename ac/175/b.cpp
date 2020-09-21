#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i =0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int count {0};
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            int j = 0;
            int k = i-1;
            while(j < k){
                if(v[j]  + v[k] > v[i]){
                    count += (k-j);
                    k -= 1;
                }else{
                    j += 1;
                }
            }
        }
    cout << count << endl;



}
