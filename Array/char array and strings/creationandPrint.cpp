#include<iostream>
#include<cstring> 
using namespace std;

int  main(){
    char arr[100]="hello";
    
    // assigning new values in array 
    strcpy(arr,"hi everyone");

    //length using strlen function
    cout<<"length of the array:"<< strlen(arr)<<endl;
    cout<<"size of the array:"<< sizeof(arr)<<endl;



    cout<<arr <<endl;


}