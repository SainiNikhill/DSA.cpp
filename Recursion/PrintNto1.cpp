#include<iostream>
using  namespace std;

void fun( int i,int n){

    if(i>n)
    return;
    else{
        cout<<n;
    }
    fun(i,n-1);
//     if(n==0) return;
//     else{
//         cout<<n;
//         n--;
//     }
//     fun(n);
// 
}

int main()
{
    int n;
    cin>>n;
    fun(1,n);
}