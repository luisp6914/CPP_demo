/*
    This program illustrates the differences between in and double
 */

//Header
#include <iostream>
using namespace std;

int main(){
    int ivar;
    double dvar;

    ivar = 100;
    dvar = 100.0;

    cout << "Original value of ivar: " << ivar << "\n";
    cout << "Original value of dvar: " << dvar << "\n\n";

    //Now, divide both by 3
    ivar = ivar / 3;
    dvar = dvar / 3;

    cout << "ivar after division: " << ivar << "\n";
    cout << "dvar after division: " << dvar << "\n";
    
    return 0;
}

