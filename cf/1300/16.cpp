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
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    for(int i = 1; i <= d; i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0)
            count++;
    }
    cout << count << "\n";
}
