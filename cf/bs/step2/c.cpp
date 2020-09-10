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

int n, x, y;

int check(int s){
    return s/x + s/y;
}

int main(){
    cin >> n >> x >> y;

    int left = 0;
    int right = 1000000000;
    if(n==0){
        return 0;
    }
    if(n==1){
        cout << min(x,y) << endl;
        return 0;
    }
    while(left + 1 < right){
        int mid = left + (right-left) / 2;
        if(check(mid) >= n-1){
            right = mid;
        }else{
            left = mid;
        }
    }
    cout << right + min(x,y) << endl;

}
