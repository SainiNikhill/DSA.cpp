#include<iostream>
using namespace std;

int cnt=0;
void fun()
{
    //base condition
    if(cnt==4){
        return;

    }
    else{
        cout<<cnt;
        cnt++;
        fun();
    }
}
int main()
{
    fun();
}