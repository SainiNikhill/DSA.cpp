#include<iostream>

using namespace std ;

int  main(){
    char b[]={'a','y','z','\0'};
    cout<<sizeof(b)<<endl;
    cout<<b<<endl;
    // if you dont use null termination then you might get some garbage value until it found  null in the array 

    char ch[]="hello";
    // when you use double quotes then its is automatically null terminated
    cout<<sizeof(ch)<<endl;
    cout<<ch<<endl;


}