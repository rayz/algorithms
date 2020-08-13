#include <iostream>
#include <deque>
#include <string>

using namespace std;


int main() {
    int n;
    cin >> n;

    int longest {0};
    string sequence;
    deque<int> d;
    
    for(int i = 0; i < n; ++i){
        int x; 
        cin >> x;
        d.push_back(x);
    }
    int prev = -1;
    while(true){
        if(d.size() == 0){
            break;
        }
        auto f = d.front();
        auto b = d.back();
        if (f > prev && b > prev){
            if(f > b){
                prev = b;
                d.pop_back();
                sequence += "R";
            }else{
                prev = f;
                d.pop_front();
                sequence += "L";
            }
            longest += 1;
        } else if (f > prev) {
            prev = f;
            d.pop_front();
            longest += 1;
            sequence += "L";
        } else if (b > prev) {
            prev = b;
            d.pop_back();
            longest += 1;
            sequence += "R";
        } else{
            break;
        }

    }


    cout << longest << endl;
    cout << sequence << endl;


}
