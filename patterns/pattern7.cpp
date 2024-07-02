/*
1
23
345
4567




*/
#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter the number of rows you want to print :";
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        int count=i;
        while(j<=i){
            cout<<count;
            count=count-1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;

    } }