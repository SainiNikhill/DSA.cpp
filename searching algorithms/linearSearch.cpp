#include<iostream>
using namespace std;


int linearsearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key) return i;
        
    }
    return -1;
}

int  main(){
    int n;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int item;

    cout<<"enter the element to be searched:"<<endl;
    cin>>item;
    cout<<linearsearch(arr,item,n);
    

} 