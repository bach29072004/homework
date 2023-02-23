#include <iostream>
using namespace std;
int main(){
    string am = " am";
    string pm = " pm";
    for (int i = 0 ;i<25;i++){
        if (i==0) {
            cout << "12 midnight" <<endl;
        }
        if (i== 12 ) {
            cout << "12 noon" << endl;
        }
        if (i>=1 &&i<=11) {
            cout << i << am<< endl;
        }
        if (i>=13 && i<=23){
            cout << i%12 << pm<< endl;
        }
    }
}
