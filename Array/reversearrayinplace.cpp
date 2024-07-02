#include<iostream>
using namespace std;

void print(int * x, int n){
    for(int i=0; i<n; i++){
        cout<<x[i]<<",";

    }
    cout<<endl;
}

void reverseArray(int *arr,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;

    }
}

int main(){
    int n ;
    cin>>n;

    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];

    }
    reverseArray(arr,n);
    print(arr,n);
}