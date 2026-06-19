#include <iostream>
#include <iterator>
using namespace std;

int main(){
    int num[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14}; 
    int evenArr[sizeof(num)];
    int oddArr[sizeof(num)];
    //array designator finders
    int eas=0; 
    int oas=0;
    

    for(int i=0; i<size(num)-1; i++){
        if (num[i]%2 == 0){
            //even 
            evenArr[eas] = num[i];

            eas++;
        }
        else{
            //odd 
            oddArr[oas] = num[i];
            oas++;

        }
    }
    cout << "even: ";
    for(int i=0; i<eas; i++){
        cout << evenArr[i] << ", ";
    }
    cout << endl;
    cout << "odd: ";
    for(int i=0; i<oas; i++){
        cout << oddArr[i] << ", ";
    }
    cout << endl;
    return 0;
}