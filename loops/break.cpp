//check no is prime or not
#include<iostream>
using namespace std;
int main(){
    int number;
    int i;
    cout<<"enter the number to be checked";
    cin>>number;
    for( i=2; i<number;i++){
        if (number%i==0){
            cout<<"not a prime number";
            break;
        }
        
    }
    if(i==number){
        cout<<"prime number";

    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}