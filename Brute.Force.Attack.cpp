#include <iostream>
using namespace std;

int main(){
    int max_attempts = 5; //It shows how many attempts the user has.    
    int attempts = 0; //Attempts starts from 0.
    string password = "12345"; //It detemines the password 
    string input; //It will be the user's input

    while ( attempts < max_attempts){ //It shows that the program runs while attempts are smaller than max_attempts.  
        cout << "What is your password: " << (max_attempts - attempts) <<" " << "Attempts left" << endl; //It shows that message and also the attempts left with a attempts calcutation.  
        cin >> input; //it asks the user input.

        if(input == password){ //Function which if user's input is equal the password.
            cout << "Welcome to the Secure Area" << endl; //Output this message. 
            return 0;
        }else{ //If the user's input is not equal the password.
            cout << "Incorrect password" << endl; //Output this message.
            attempts ++; //It calculates the attempts left.
        }

    }
    cout << "ACCESS BLOCKED" << endl; //This message turns up when the attempts finish.
    return 0;
}