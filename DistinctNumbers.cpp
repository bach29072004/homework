#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n << " ";
    int b = n-1;
    while (true){
        cin >> n;
        if (n<0) return 0;
        if (n!=b) cout << n << " ";
        b=n;
    }
}
