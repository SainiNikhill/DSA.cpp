#include<iostream>
using namespace std;

int factorial(int N){
    int ans=1;
    for(int i=1; i<=N;i++){
        
        ans=ans*i;

    }
    return ans;

}
int main(){
    int f =factorial(5);
    cout<<f<<endl;
}