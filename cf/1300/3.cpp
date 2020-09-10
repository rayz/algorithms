#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    vector<char> v;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        v.push_back(c);
    }
    
    while(t--){
        for(int i = 0; i < n-1; i++){
            if(v[i] == 'B' && v[i+1] == 'G'){
                v[i] = 'G';
                v[i+1] = 'B';
                i += 1;
            }
        }
    }
    for(char c: v){
        cout << c;
    }
    cout << endl;
}

