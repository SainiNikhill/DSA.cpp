#include<iostream>
using namespace std;
// void print(int * x){
//     cout<<sizeof(x);

// }
void print(int * x ,int n){
    for(int i=0;i<n;i++){
        cout<<x[i]<<endl;

    }
}
int main(){
    int n;
    cin>>n;


    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    cout<<sizeof(arr)<<endl;
    print(arr,n);

} // how to insert  value in function array then 
// use 

    
