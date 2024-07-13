#include<iostream>
using namespace std;
int main(){
    int marks=10;
    long int number=121212122121212;
    int number_int=number;
    cout<<number<<endl;
    cout<<number_int<<endl;

    cout<<sizeof(number)<<endl;
    cout<<sizeof(number_int)<<endl;///here in this code overflow occurs
}