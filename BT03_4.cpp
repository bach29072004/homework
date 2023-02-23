#include <iostream>
using namespace std;
int main(){
       int a,b;
       cin >> a >> b;
       char k;
       char map[20][20];
       fill(&map[0][0],&map[0][0] + sizeof(map),48);
       for (int i =1;i<=a;i++){
              for (int j=1;j<=b;j++){
                     cin >> k;
                     if (k=='*') map[i][j]=k;
              }
       }
       for (int i =1;i<=a;i++){
              for (int j=1;j<=b;j++){
                     if (map[i][j]=='*') {
                            for (int m=i-1;m<=i+1;m++){
                                   for (int n=j-1;n<=j+1;n++){
                                          if (map[m][n]!='*') map[m][n] +=1;
                                   }
                            }
                     }
              }
       }
       for (int i =1;i<=a;i++){
              for (int j=1;j<=b;j++){
                     cout << map[i][j] << " ";
              }
              cout << endl;
       }
}
