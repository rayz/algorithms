#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char a;
    cin >> a;
    if(isupper(a)){
        cout << "A" << endl;
    }else{
        cout << "a" << endl;
    }
}
