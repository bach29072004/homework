#include <iostream>
using namespace std;
int main(){
       string s;
       cin >> s;
       int l = s.length();
       for (int i=0;i<l;i++){
              if (s[i]!=s[l-i-1]) {
                     cout << "NO";
                     return 0;
              }
       }
       cout << "YES";
}
