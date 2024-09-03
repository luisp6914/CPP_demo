/*
    This prgram will ask the user to input the feet they want to 
    covert to meters.
*/

//Header
#include <iostream>
using namespace std;

int main(){
    double feet;

    cout << "Enter the feet you want to convert to meters: ";
    cin >> feet;

    double meters = feet/3.28;

    cout << feet << " Feet in meters is/are: " << meters << "\n";

    return 0; 

}