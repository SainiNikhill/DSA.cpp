#include<iostream>
using namespace std;

void fun(int i,int n){


    if(i>n){
        return;
    }
    else{
        cout<<i;

    }
    fun(i+1,n);
//     if(n==0) return;
//     else{
//         cout<<i;
//         i++;
//         n--;
//     }
//     fun(i,n);
// 
}

int main()

{
    int n;
    cin>>n;
    fun(1,n);
}