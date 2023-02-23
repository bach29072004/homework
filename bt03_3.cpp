#include <iostream>
using namespace std;
bool sodoiguong(int n){
       int a=n;
       int sum =0;
       while (a!=0){
              int r =a%10;
              sum = sum*10 +r;
              a=a/10;
       }
       return sum == n;
}
int main(){
       int T;
       cin >> T;
       int a,b;
       for (int j=0;j<T;j++){
              cin >> a >> b;
              int d = 0;
              for (int i=a;i<=b;i++){
                     if (sodoiguong(i)) d+=1;
              }
              cout << a << " => " << b << " co " << d << " so doi guong" << endl;
       }

}
