#include <iostream>
using namespace std;

//This function determines if the number is even or odd
string checkEven(int number) {
    if (number % 2 == 0) { //It will check if the number is even.
        return "The provided number is even"; //It returns the even number to be output bellow. 
    } else {
        return "The provided number is odd"; //It returns the odd number to be output bellow.
    }
}

int main() {
    int value;

    cout << "Enter a number: "; //Output this message to the user.
    cin >> value; //Ask the user for a number.

    string message = checkEven(value); //This function checks the number which user put.

    cout << message << endl; //Output the result.

    return 0;
}