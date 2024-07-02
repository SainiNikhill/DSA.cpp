#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1; i>=0;i++){
        int didswap=0;
        for(int j=0; j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }

        }
        if(didswap==0){
            break;
        }
       

    }
}
int main(){
    int n;
    cout<<"enter the  size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    bubble_sort(arr,n);
    //printing   sorted array 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}