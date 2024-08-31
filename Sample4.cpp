/*
    An interactive program that computes the area of a rectangle
 */

//Header
#include <iostream>
using namespace std;

//Function to calculate the area of a rectangle
int main(){
    int length, width;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the width: ";
    cin >> width;

    cout << "The area is: "
    << length * width;

    return 0;
}