#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0) return ;
    else{
        cout<<"nikhil";
        n--;
    }
    fun(n);
}




int main (){

    int n;
    cin>>n;
    fun(n);
}