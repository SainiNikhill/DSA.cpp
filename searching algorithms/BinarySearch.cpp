#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int  arr[], int start, int end,int key)
{
    int mid;

   while(start<=end){
    
    mid=(start+end)/2;

    //checks if x is present or not 
    if(arr[mid]==key)
    return mid;

    //if x is greater than mid ignore left half
    if(arr[mid]<key)
    start=mid+1;
    //if key is smaller than mid then ignore right half
    else end=mid-1;

    }
    return -1;

}

int main(){
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;



    int arr[n];
    cout<<"enter the elements of the array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int value;
    cout<<"enter the value to be searched"<<endl;
    cin>>value;
    int result = binarySearch(arr,0,n-1,value);
    if(result!=-1) cout<<"element found at index:"<<result<<endl;
    else cout<<"element not found"<<endl;



}