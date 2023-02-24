#include <iostream>
#include <iomanip>
using namespace std;
int main(){
       int n;
       cin >> n;
       int h[20][20];
        for (int t=0;t<n;t++){
              for (int q=0;q<n;q++){
                     h[t][q]=0;
              }
       }


       int k=1,j=(n-1)/2, i =0,a=0,b=0;
       while (k<=n*n){
              h[i][j]=k;
              a=i;
              b=j;
              if (i==0) {
                     i=n-1;
              }
              else i=i-1;
              if (j==n-1){
                     j = 0;
              }
              else j=j+1;
              if (h[i][j]!=0) {
                     j=b;
                     if (a==n-1){
                            i=0;
                     }
                     else i=a+1;
              }
              k++;
       }
       for (int t=0;t<n;t++){
              for (int q=0;q<n;q++){
                     cout<< setw(5) << h[t][q]  ;
              }
              cout << endl;
       }
}
