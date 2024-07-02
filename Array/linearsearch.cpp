#include<iostream>
using namespace std;

// it should return an index if element present other wise -1
int linearSearch(int * arr,int n ,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;

        }
        }
        return -1;

}
int main(){
    //take input
    int n;
    cout<<"enter the size of array";
    cin>>n;

    //input
    int arr[n];
    cout<<"enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    // which element to search
    int key;
    cout<<"enter the element to search:";
    cin>>key;
    cout<< "searching element "<<key<<" in array"<<endl;

    cout<<linearSearch(arr,n,key);

}