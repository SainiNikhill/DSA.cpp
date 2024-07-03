#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low , int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);}

    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int low , int high){
    if(low<high){
        int partition_id=partition(arr, low, high);
        quicksort(arr,low,partition_id-1);
        quicksort(arr,partition_id+1,high);


    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
        }

    quicksort(arr,0,n-1);
    print(arr,n);    

}