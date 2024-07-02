// creating own string length function
#include<iostream>
using namespace std;


int length(char *arr){
    int i ;
    for(i=0; arr[i]!='\0';i++){}

    return i;
}
int main(){
    char arr[100];

    cin.getline(arr,100);
    cout<<arr<<endl;
    cout<<"the length of the array is :"<<length(arr)<<endl;
}