#include<bits/stdc++.h>
using namespace std;
// reverse array
void reverseString(char ch[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
       
    }
    
}
//get length of  string 
int getlength(char ch[]){
    int cnt=0;
    for (int i =0; ch[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}

int main(){
    char ch[20];
    cin>>ch;
    int n=getlength(ch);
    cout<<n<<endl;

    reverseString(ch,n);
    cout<<ch;
    return 0;

}