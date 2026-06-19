#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Gimme an integer: ";
    cin >> num;
    
    if (num >= 0){
        cout << "Your number is positive!" << endl; 
    }
    else {
        cout << "your number is evil and negative" << endl;
    }
    return 0;
}