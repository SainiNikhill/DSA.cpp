#include<iostream>
using namespace std ;
int main(){
    int x=10;
    int &y=x;

    //if i increment x then it will affect the value of variable x and its reference as well
    x+=1;
    
    cout<<x<<endl;
    cout<<y<<endl;

    
    return 0;

}