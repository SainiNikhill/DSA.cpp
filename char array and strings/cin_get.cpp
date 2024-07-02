// cin dont read whitespaces so to read any kind of letter we must use cin.get();
#include<iostream>
using namespace std;

int main(){
    char ch;

    ch=cin.get();

    if(ch== ' '){
        cout<<"you have entered a space ";

    }
    else if(ch=='\n'){
        cout<<"you entered a new line";
    }
    else{
        cout<<"you entered a char "<<" "<<ch<<endl;
    }
    return 0;

}