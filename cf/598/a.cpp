#include <iostream>
using namespace std;

int main(){
    int q;
    cin >> q;
    int a,b,n,s;
    
    int curr {0};

    while (q--){
        cin >> a >> b >> n >> s;
        while(a > 0 and s - n >= 0){
            s -= n;
            a--;
        }

        if (b >= s){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

}
