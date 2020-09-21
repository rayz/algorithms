#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        priority_queue<int> q;
        string s;
        cin >> s;
        int count = 0;
        for(auto&c: s){
            if(c == '1'){
                count += 1;
            }else{
                q.push(count);
                count = 0;
            }
        }
        q.push(count);
        int score = 0;
        while(!q.empty()){
            score += (q.top());
            q.pop();
            if(!q.empty())
                q.pop();
        }
        cout << score << endl;
    }
}
