#include <iostream>
using namespace std;

int main(){
cout << "1: January\n2: February\n3: March\n4: April\n5: May\n6: June\n7: July\n8: August\n9: September\n10: October\n11: November\n12: December" << endl; //It is an output which prints these options//
    int choice; //It is a choice integer//
    cout << "What month would you like to know? " << endl; //It outputs this message asking user's option//
    cin >> choice; //It takes user's option//
    switch (choice){ //This is a statement which is used to check the user's answer//
        case 1: //Firts case//
        cout << " 1 = January and it has 31 days"; //If user choises number 1, it will output this message//
        break; //It stops the program//
        case 2: //Second case//
        cout << "2 = February and it has 28 days"; //If user choises number 2, it will output this message//
        break;//It stops the program//
        case 3: //Third case
        cout << "3 = March and it has 31 days"; //If user choises number 3, it will output this message//
        break;//It stops the program//
        case 4: //Fourth case
        cout << "4 = April and it has 30 days"; //If user choises number 4, it will output this message//
        break;//It stops the program//
        case 5: //Fifth case
        cout << "5 = May and it has 31 days"; //If user choises number 5, it will output this message//
        break;//It stops the program//
        case 6: //Sixth case
        cout << "6 = June and it has 30 days"; //If user choises number 6, it will output this message//
        break;//It stops the program//
        case 7: // Seventh case
        cout << "7 = July and it has 31 days"; //If user choises number 7, it will output this message//
        break;//It stops the program//
        case 8: //Eighth case
        cout << "8 = August and it has 31 days"; //If user choises number 8, it will output this message//
        break;//It stops the program//
        case 9: //Ninth case
        cout << "9 = September and it has 30 days"; //If user choises number 9, it will output this message//
        break;//It stops the program//
        case 10: //Tenth case
        cout << "10 = October and it has 31 days"; //If user choises number 10, it will output this message//
        break;//It stops the program//
        case 11: //Eleventh case
        cout << "11 = November and it has 30 days"; //If user choises number 11, it will output this message//
        break;//It stops the program//
        case 12: //Twelfth case
        cout << "12 = December and it has 31 days"; //If user choises number 12, it will output this message//
        break;//It stops the program//
        default: //No argument
        cout << "Invalid Option" << endl; //Output this message if the user put an invalid number.

        return 0;
    }
}