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

int euclid(int a, int b){
    return (b == 0 ? a : euclid(b, a % b));
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    cout << euclid(a,b) << '\n';
}
