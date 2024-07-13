#include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<=20){
        if(i%7==0){
            cout<<"multiple of 7";
            i=i+1;
            continue;
        }
        cout<<i;
        i++;
    }
    return 0;
}