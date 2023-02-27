#include <iostream>
#include <iomanip>
using namespace std;
struct sv{
       string name ;
       double math,physic,english;
       double tb=(math+physic+english)/3;
};
void sapxephteodiemtoan(sv a[],int n){
        for (int i = 0; i < n - 1; i++){
              for (int j = i + 1; j < n; j++){
                     if(a[i].math < a[j].math){
                            sv tmp = a[i];
                            a[i] = a[j];
                            a[j] = tmp;
                     }
              }
        }
}
void sapxephteodiemly(sv a[],int n){
        for (int i = 0; i < n - 1; i++){
              for (int j = i + 1; j < n; j++){
                     if(a[i].physic < a[j].physic){
                            sv tmp = a[i];
                            a[i] = a[j];
                            a[j] = tmp;
                     }
              }
        }
}
  void sapxephteodiemtienganh(sv a[],int n){
        for (int i = 0; i < n - 1; i++){
              for (int j = i + 1; j < n; j++){
                     if(a[i].english < a[j].english){
                            sv tmp = a[i];
                            a[i]= a[j];
                            a[j]= tmp;
                     }
              }
        }
  }
  void sapxephteodiemtb(sv a[],int n){
        for (int i = 0; i < n - 1; i++){
              for (int j = i + 1; j < n; j++){
                     if(a[i].tb < a[j].tb){
                            sv tmp = a[i];
                            a[i]= a[j];
                            a[j]=tmp;
                     }
              }
        }
  }

int main(){
       int n;
       cin >> n;
       sv a[n];
       for (int i=0;i<n;i++){
              cout << "ten: ";
              cin.ignore();
              getline(std::cin,a[i].name);
              cout << "diem toan: ";
              cin >> a[i].math;
              cout << "diem ly: ";
              cin >> a[i].physic;
              cout << "diem tieng anh: ";
              cin >> a[i].english;
       }
       int k=20;
       int r=30;
       cout << "theo diem toan:" << endl;
        cout <<setw(r) << " " <<  setw(k) << "toan" << setw(k) << "ly" << setw(k) << "tieng anh" << endl;
       sapxephteodiemtoan(a,n);
       for (int i=0;i<n;i++){
              cout << setw(r)<<a[i].name ;
              cout << setw(k) << setprecision(1) << fixed << a[i].math ;
              cout << setw(k) << setprecision(1) << fixed << a[i].physic;
              cout << setw(k) << setprecision(1) << fixed << a[i].english ;
              cout << endl;
       }
       cout << "theo diem ly:" << endl;
       cout <<setw(r) << " " <<  setw(k) << "toan" << setw(k) << "ly" << setw(k) << "tieng anh" << endl;
       sapxephteodiemly(a,n);
       for (int i=0;i<n;i++){
              cout << setw(r)<<a[i].name;
              cout << setw(k) << setprecision(1) << fixed << a[i].math ;
              cout << setw(k) << setprecision(1) << fixed << a[i].physic;
              cout << setw(k) << setprecision(1) << fixed << a[i].english ;
              cout << endl;
       }
       cout << "theo diem tieng anh:" << endl;
       cout <<setw(r) << " " <<  setw(k) << "toan" << setw(k) << "ly" << setw(k) << "tieng anh" << endl;
       sapxephteodiemtienganh(a,n);
       for (int i=0;i<n;i++){
              cout << setw(r)<<a[i].name;
              cout << setw(k) << setprecision(1) << fixed << a[i].math ;
              cout << setw(k) << setprecision(1) << fixed << a[i].physic;
              cout << setw(k) << setprecision(1) << fixed << a[i].english ;
              cout << endl;
       }
}
