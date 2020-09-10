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
   double n;
   cin >> n;
   double sm = 0;
   for(int i = 0; i < n; i++){
       double x;
       cin >> x;
       sm += (x/100);
   }
   setprecision(20);
   cout << (sm*100)/n << '\n';
    
}
