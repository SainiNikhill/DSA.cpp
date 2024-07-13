#include<iostream>
using namespace std ;
int area (int l ,int b){// in case field is rectangle 
    return l*b;

}
int area(int l){// in case field is square
    return l*l;
}
int main(){
    cout<< area(5)<<endl;
    cout<< area(5,6)<<endl;
}