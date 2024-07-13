// when we have same name of constructor parameter and properties(attributes) of objects with same name so ot make lot of confusion for constructor and compiler
// in order to resolve this we use this keyword;

#include<iostream>
using namespace std;

class Teacher
{
    private:
     double salary;
 public:
       string name;
       string subject;
       string dept;
      
 

 Teacher(string name,string subject,string dept,double salary)
 {
    this->name=name;
    this->dept=dept;
    this->subject=subject;
    this->salary=salary;
 }
 void getinfo(){
    cout<<"name:"<<name<<endl;
    cout<<"subject:"<<subject<<endl;
    cout<<"dept:"<<dept<<endl;
    cout<<"salary"<<salary<<endl;
 }

};

int main(){

    Teacher t1("nikhil","c++","cse",25000);
    t1.getinfo();

    
}