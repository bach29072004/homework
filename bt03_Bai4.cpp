#include <iostream>
#include <iomanip>
using namespace std;
int main(){
       int n;
       cin >> n;
       int a[100][100];
       for (int i=1;i<n;i++){
              for (int j = 1;j<=n;j++){
                            a[i][j] =0;
              }
       }
       for (int i=0;i<n;i++){
              a[i][0]=1;
       }
       for (int i=1;i<n;i++){
              for (int j = 1;j<=i;j++){
                     a[i][j] = a[i-1][j]+a[i-1][j-1];
              }
       }
       for (int i=0;i<n;i++){
              for (int j =0;j<n;j++){
                     if (a[i][j] !=0)
                     cout << setw(3) <<  a[i][j] << " ";
              }
              cout << endl;
       }
}
