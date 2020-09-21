#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll a[100005];

int main(){
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }

    ll worst = 0;
    ll need = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] < worst){
            need += worst - a[i];
            a[i] = worst;
        }
        worst = max(worst, a[i]);
    }
    cout << need << endl;
}
