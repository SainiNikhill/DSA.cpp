#include<iostream>
using namespace std ;
int main(){
    //creating an array
    int arr[100];
    
    //user input
    int n;
    cin>>n;


    
    for(int i=0; i<n;i++){
        cin>>arr[i];

    }
    // printing element of array
    for(int i=0; i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

}
