#include <iostream>
using namespace std;
int main(){
       int n;
       cin >> n;
       int a =1;
       int b=n;
       for (int i =0;i<n;i++){
              for (int j = a;j<=b;j++){
                     if (j%10==0) cout << 10<< " ";
                     else cout << j%10 << " ";
        }
        a+=1;
        b+=1;
        cout << endl;
    }
}
