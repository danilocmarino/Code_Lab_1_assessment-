#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[]={"Jake" "Zac", "Ian", "Ron", "Sam", "Dave"}; //Arrays [] which have these values inside {}.
    string search = "Sam"; //It determines that Sam is a true value.
    bool found = false; //This boolean will run through the function.

    cout << "Enter a name to search for: "; //Output this message.
    cin >> search; // The user's input.

    int size = sizeof(names) / sizeof(names[0]); //It returns the array's size. 

    for(int i =0; i<size; i++){ //Loop which checks the array from 0 to size, 1 by 1.
        if(names[i]==search){ //If i finds search (Sam) inside array (names).
            cout << search << " was found in the list. " << endl; //Output search (Sam) with the message.
            found = true; //It means that Sam was found (True). 
            break; //Stop the programm.
        }
        
    }
    
    if(!found){ //If the user put other names.
        cout << search << " was not found in the list. " << endl; //Output input with the message.   
    }
} 
   