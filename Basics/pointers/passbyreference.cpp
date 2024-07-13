#include<iostream>
using namespace std ;

//  void  incMoney(int * mpt){
//     cout<<mpt<<endl;
//     *mpt=2*(*mpt);
//     cout<<*mpt<<endl;
//  }
// int main(){
//     int money=10;
//     incMoney(&money);
//     cout<<money<<endl;


/// using by reference variable 
void incM(int &myM){
    myM=2*myM;
    cout<<myM<<endl;




}
int main(){
    int money=10;
    incM(money);
    cout<<money;


}