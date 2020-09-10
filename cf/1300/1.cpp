#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sm = 0;
    int x,y,z;
    x = y = z = 0;
    while(n--){
        int x1,y1,z1;
        cin >> x1 >> y1 >> z1;
        x += x1;
        y += y1;
        z += z1;
    }
    cout << (x == 0 && y == 0 && z == 0 ? "YES\n" : "NO\n");
}
