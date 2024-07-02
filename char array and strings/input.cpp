#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char arr[100];

    //cin>>arr;

    cin.getline(arr,100);

    cout<<strlen(arr)<<endl;
    cout<<arr<<endl;

    /*this will only print only one word but if you want to print a whole line
    like hello world this will use function getline*/


    return 0;


}