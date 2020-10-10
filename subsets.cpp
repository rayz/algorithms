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

vector<vector<int>> subsets;
vector<int> temp;
int n;

void search(int k ){
    if(k == n + 1){
       subsets.push_back(temp);
    }else{
        temp.push_back(k);
        search(k+1);
        temp.pop_back();
        search(k+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    search(0);
    for(vector<int> &v : subsets){
        for(auto x : v){
            cout << x << " ";
        }
        cout << '\n';
    }
    cout << '\n';

}
