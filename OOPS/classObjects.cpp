#include<iostream>
using namespace std;

class Teacher{

private:
    double Salary;


public:

    int id;
    string name;
    string dept;
    string subject;

    void changedepartment( string newDept)
    {
        dept=newDept;
        

    }

    

};



int main(){
    Teacher t1; // initialize object t1

    t1.name="nikhil";// accessing attributes using . operator;

    t1.id=1;
    t1.subject="c++";
    t1.dept="cse";
    t1.changedepartment("ME");
    cout<<t1.name;
    cout<<t1.dept;
    

}


//  we cant acces private attributes directly 
//but we can use setter and getter public functions to acces private attributes;
