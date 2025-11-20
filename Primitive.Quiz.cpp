#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string answer; //Here, we have the string answer//
    cout << "What is the Capital of France: "; //It is an output with this message//
    cin >> answer; //It takes user's answer//
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower); //It is the algorithm library which makes the answer to be the same form, even if there is capital letters//
    if(answer == "paris"){ //It takes the user answer and if it is equal Paris, paris or PaRis//
        cout << "Your answer is correct. "; //If answer is Paris. It prints this message//
    } else{
        cout << "Your answer is wrong. "; // If answer is not Paris. It prints this message//
        
        return 0;
    }
}