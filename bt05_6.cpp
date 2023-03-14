#include <iostream>
using namespace std;
int ucln(int m, int n){
       while (m!=n){
              if (m>n) m=m-n;
              else n = n-m;
       }
       return m;
}
int main(){
       int m,n;
       cin >> m >> n;
       if (ucln(m,n)==1) cout <<  m  << " va " << n << " la hai so nguyen to cung nhau";
       else cout << m  << " va " << n << " khong phai hai so nguyen to cung nhau";

}
