/*Access modifiers
access modifiers are three types;
Public 
private 
protected

*/
#include<iostream>
using namespace std;
class Teacher{
private:
    double salary;

public:
    int id;
    string name="";
    string dept="";
    string subject="";


    //setter functions
    void setsalary(double s)
    {
        salary=s;
    }
    //getter functions
    double getsalary(){
        return salary;
    }

};


int main(){

    Teacher t1;
    t1.name="nikhil";
    t1.subject="c++";
    t1.dept="CSE";
    //t1.salary=25000;// we cant acces salary as it is under private access in order to access private attributes we must use settter and getter functions;
    t1.setsalary(25000);
    cout<<t1.getsalary();
}


