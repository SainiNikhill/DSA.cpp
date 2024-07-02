#include <iostream>
using namespace std;

int main(){
    //create
    int arr[100]={12,15,14,16};
    // cout<<arr[0]<<endl;
    // cout<<arr[2]<<endl;
    int n= sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    // print all the elements of the array
    for(int i=0; i<n; i++)
{
cout<<arr[i]<<" , ";
}}