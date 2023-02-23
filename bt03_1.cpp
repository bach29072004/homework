#include <iostream>
using namespace std;
int main(){
       int n;
       int d;
       cin >> n;
       bool a[1000];
       for (int i =1;i<=1000;i++){
              a[i] = false;
       }
       for (int i=0;i<n;i++){

              cin >> d;

              if (a[d]) {
                     cout << "YES";
                     return 0;

              }
              else a[d]= true;
       }
       cout << "NO";
}
