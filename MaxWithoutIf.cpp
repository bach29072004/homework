#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int k = (x+y)/2+abs(x-y)/2;
    cout << k;
}
