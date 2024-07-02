// creating  a read function to read char array 
#include <iostream>
using namespace std;
void readline(char *arr,int len,int delim){
    // line terinmates at '\n'
    int cnt=0;
    char ch;
    while(true){
        ch=cin.get();
        arr[cnt]=ch;
        if( cnt==len-1 || ch==delim ){
            break;
        }
        cnt++;

    }
    arr[cnt]='\0';
    cout<<cnt<<endl;

}
int main(){
    char arr[100];
    readline(arr,100,'$');
    cout<<arr<<endl;

}