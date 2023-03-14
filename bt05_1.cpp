#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void print(char *a[],int m ,int  n){
       for (int i=0;i<m;i++){
              for (int j = 0;j<n;j++){
                     if (a[i][j] == 'b') cout << '*' << " ";
                     else cout << a[i][j] << " ";
              }
              cout << endl;
       }
}
void printlose(char *a[],int m ,int  n){
       for (int i=0;i<m;i++){
              for (int j = 0;j<n;j++){
                     cout << a[i][j] << " ";
              }
              cout << endl;
       }
}
void mo(char* a[],int n,int m , int e, int f){
       for (int i =-1;i<2;i++){
              for (int j=-1;j<2;j++){
                     if (a[e+i][f+j] == 'b') a[e][f] +=1;
              }
       }
}
bool chon(char *a[] , int bom[], int m , int n,int k){
       int e,f;
       cin >> e >> f;
       for (int i=0;i<k;i++){
              if (e == bom[i]/10 && f == bom[i]%10){
                     cout << "you are dead"<< endl;
                     printlose(a,m,m);
                     return false;
              }
       }
       a[e][f] = '0';
       mo(a,n,m,e,f);
       print(a,m,n);
       return true;
}
int main(){
       cout << "*:chua mo" << endl;
       cout << "b: co bom" << endl;
       cout << "o: da mo" << endl;
       srand(time(0));
       int m,n,k;
       cin >> m >> n >> k;
       char **a = new char*[10];
       for (int i =0;i<m;i++){
              a[i]= new char[10];
       }
       for (int i =0;i<n;i++){
              for (int j =0;j<m;j++){
                     a[i][j] = '*';
              }
       }
       int bom[k];
       for (int i =0;i<k;i++){
              int c = rand()%m;
              int d = rand()%n;
              if (a[c][d] != '*') i=i-1 ;
              else{
                     a[c][d] ='b';
                     bom[i] = c*10+d;
                     }
       }
       print(a,m,n);
       while(chon(a,bom,m,n,k)){
       }

}
