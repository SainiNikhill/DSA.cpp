#include<iostream>
using namespace std;

int main(){
    string weather;
    int temp;

    cout<<"enter the temperature in your area in degrees";
    cin>>temp;
    weather=(temp<25)?("pleasent weather"):("hot weather");
    cout<<weather;

}