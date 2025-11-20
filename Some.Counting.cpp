#include <iostream>
using namespace std;

int main() {
    int i = 0; //It means that i has 0 value
    cout << "Counting up from 0 to 50: "; //Output this message. 
    while (i <= 50){ //Function which means from 0 (i) and stops (<=) 50. 
        cout << i << " "; //Output above function.
        i++; //It increments of 1.
    }

    cout << endl; //It means that the next text will start on new line.

    i = 50; //It means that i has 50 value.
    cout << "Counting down from 50 to 0: "; //Output this message.
    while (i >= 0){ //Function which means from 50 (i) and stops (>=) 0.
        cout << i << " "; //Output above function.
        i--; //It decrements of 1.
    }

    cout << endl; //It means that the next text will start on new line.

    i = 30; //It means that i has 30 value.
    cout << "Counting up from 30 to 50: "; //Output this message.
     while (i <= 50){ //Function which means from 30 (i) and stops (<=) 50.
        cout << i << " "; //Output above function.
        i++; //It increments of 1.
    }
    cout << endl; //It means that the next text will start on new line.

    i = 50; //It means that i has 50 value
    cout << "Counting down from 50 to 10 (by 2): "; //Output this message.
    while (i >= 10){ //Function which means from 50 (i) and stops (>=) 10.
        cout << i << " "; //Output above function.
        i -=2; //It decrements of 2.
    }
    cout << endl; //It means that the next text will start on new line.

    i = 100; //It means that i has 100 value.
    cout << "Counting up from 100 to 200 (by 5): "; //Output this message.
    while (i <= 200){ //Function which means from 100 (i) and stops (<=) 200.
        cout << i << " "; //Output above function.
        i += 5; //It increments of 5.
    }
   
}
