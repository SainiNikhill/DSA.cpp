// copy sonstrutor used to copy object properties we can declare custom copy constructor but it is intialized automatically when called ;
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

 // custom copy constructor
 Teacher (Teacher &obj)
 {
    this->name=obj.name;
    this->subject=obj.subject;
    this->salary=obj.salary;
    this->dept=obj.dept;
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
    Teacher t2(t1);
    t2.getinfo();

    
}