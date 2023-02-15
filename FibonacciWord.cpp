#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "so chu finonaci can xuat:";
    cin >> n;
    string a[n];
    a[0] = "a";
    a[1] = "b";
    for (int i = 2;i<n;i++){
        a[i] = a[i-1] + a[i-2];
    }
    for (int i =0;i<n;i++){
        cout << a[i] << endl;
    }
}
