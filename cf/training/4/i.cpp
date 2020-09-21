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
    int n,m,z;
    cin >> n >> m >> z;
    int count = 0;
    while(z>0){
        if(z % n == 0 && z % m == 0){
            count++;
        }
        z--;
    }
    cout << count << endl;
}
