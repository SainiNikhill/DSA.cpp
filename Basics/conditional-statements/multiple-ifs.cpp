#include<iostream>
using namespace std ;
int main(){
     //multiple if block
     int phone=15;
     string weather;
     int money;

     cin>>weather;
     cin>>money;
     if(money>=phone){
        cout<<"buy phone";

     }

     if(weather=="pleasant"){
        cout<<"go out"<<endl;


     }


     else{
        cout<<"no picnic"<<endl;

     }
}