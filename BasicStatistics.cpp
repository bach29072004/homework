#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i =0;i<n;i++){
        cin >> a[i];
    }
    double p;
    for (int i = 0;i<n;i++){
        p += a[i];
    }
    cout << "mean= " << p/n << endl;
    sort(a,a+n);
    cout << "max = " << a[n-1] << endl;
    cout << "min = " << a[0] << endl;

}




