#include <iostream>
using namespace std;
int main(){
       int x,y;
       cin >> x >> y;
       int a[20][20];
       int hang=x,cot=y,k=1,i=0,j=0,h=0;
      while(k<=x*y){
              for (j =h ;j<cot;j++){
                     a[h][j] = k;
                     k++;
              }
              for (i=h+1;i<hang;i++){
                     a[i][cot-1] =k;
                     k++;
              }

              for (j=cot-2;j>=h;j--){
                     a[hang-1][j]=k;
                     k++;
              }
              for (i=hang-2;i>h;i--){
                     a[i][h]=k;
                     k++;
              }
              h++;cot--;hang--;
       }
       for (int t =0;t<x;t++){
              for (int q =0;q<y;q++){
                     cout << a[t][q] <<" ";
              }
              cout << endl;
       }
}
