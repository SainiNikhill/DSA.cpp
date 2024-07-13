#include<iostream>
using namespace std;

class Hero{
    public :
    string name;
    string subject;

// non parameterized constructor
Hero()
{
    cout<<"constructor called"<<endl;
}

//parameterrized constructor;
Hero( string n , string s)
{
name=n;
subject =s;
}

//print function
void getinfo(){
    cout<<"name:"<<name<<endl;
    cout<<"subject:"<<subject<<endl;
}


};

int main(){
    
    Hero ramesh("nikhil","c++");// calling parameterized constructor 
    ramesh.getinfo();
    
}