/*
    This project is intended to use loops, if statements, and code blocks.
    It will be a simple table that displays 1-100 feet and conver it to metters
*/

#include <iostream>
using namespace std;

int main()
{
    for (int counter = 1; counter <= 100; counter++){
        if (counter % 10 == 0){
            cout << counter << " feet is " << counter/3.28 << " meters\n\n"; 
        }
        else{
            cout << counter << " feet is " << counter/3.28 << " meters\n";
        }
    }
}
