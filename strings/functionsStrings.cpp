#include<bits/stdc++.h>
using namespace std;


// convert into lower case 
char  tolowerCase(char cho){
    if(cho>='a' && cho<='z'){
        return cho;
    }
    else{
        char temp = cho-'A'+'a';
        return temp;

    }
}



//chek palindrome;
bool checkPalindrome(char ch[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(tolowerCase(ch[start])!=tolowerCase(ch[end]))
        {
            return 0;
        }
        else{
            start++;
            end--;
            }
        }
        return 1;
}



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
    cout<<"enter the string :";
    cin>>ch;
    int n=getlength(ch);
    cout<<n<<endl;

    //reverseString(ch,n);

    cout<<"check for plaindrome " ;
    cout<<checkPalindrome(ch,n);
    


   
    

}