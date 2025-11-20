#include <iostream>
using namespace std;

int main(){
    string name; //This is a name string//
    string surname;
    string hometown; //This is a hometown string//
    int age; //This is an age integer//

    cout << "What's your name? "; //Output asking user's name//
    cin >> name; //User input his/her name//

    cout << "What's your surname? "; //Output asking user's surname//
    cin >> surname; //User inout his/her surname//

    cout << "What's your hometown? "; //Output asking user's hometown//
    cin >> hometown; //User input his/her hometown//

    cout << "What's your age? "; //Output asking user's age//
    cin >> age; //User input his/her age//

    cout << "Your name is: " << name <<" "<< surname << endl << "Your hometown is: " << hometown << endl << "Your age is: " << age << endl; //This will output the user's answer on each line//
}