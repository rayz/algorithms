#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int> left;
    map<int,int> right;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(left.find(x) == left.end()){
            left[x] = i+1;
        }
        right[x] = n-i;
    }
    int q;
    cin >> q;
    long long ltotal = 0, rtotal = 0;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        ltotal += left[x];
        rtotal += right[x];
    }
    cout << ltotal << " " << rtotal << "\n";
}
