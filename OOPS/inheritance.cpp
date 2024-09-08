#include<iostream>
#include<string>
using namespace std;
// single inheritance 

// class Person{
//     public:
//     string name;
//     int age;

//     Person( )
//     {
        

//     }

// };

// class Student: public Person{
//     public:
//     int rollNo;

//     void getinfo() {
//         cout<<"name:"<< name<< endl;
//         cout<<"age:"<< age<<endl;
//         cout<< "rollNo:"<<rollNo<<endl;

//     }

// };



// multiple inheritance 
class Person{
    public:
    string name;
    int age;

    Person( )
    {
        

    }

};

class Student: public Person{
    public:
    int rollNo;

   

}; 
class GradStudent: public Student{
    public:
    string researchArea;

    void getinfo() {
        cout<<"name:"<< name<< endl;
        cout<<"age:"<< age<<endl;
        cout<< "rollNo:"<<rollNo<<endl;
        cout<<"researchArea: "<<researchArea<<endl;

    }

};

int main()
{
    GradStudent s1;
    s1.name="nikhil";
    s1.age=21;
    s1.rollNo=34;
    s1.researchArea="Quantum Physics";


    s1.getinfo();
    return 0;


}