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

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    deque<pair<int,int>> d;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        d.push_back({x,i+1});
    }
    while(d.size() != 1){
        pair<int, int> fst = d.front();
        d.pop_front();
        if(fst.first > m){
            fst.first -= m;
            d.push_back({fst.first, fst.second});
        }
    }
    cout << d.front().second << '\n';

}
