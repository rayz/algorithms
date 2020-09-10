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

bool isprime(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin >> n >> m;
    bool valid = true;
    bool foundprime = false;
    for(int i = n+1; i <= m; i++){
        if(isprime(i)){
            foundprime = true;
            if(i != m){
                valid = false;
            }
            break;
        }
    }
    if(!valid || !foundprime){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
    

}
