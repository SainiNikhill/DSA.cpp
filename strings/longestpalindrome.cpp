/* this problem states that given string is combination of both uppercase and lowercase alphabets 
we have to return length of longest possible palindrome */

#include<bits/stdc++.h>
using namespace std;
int longestpalindrome( string s){
    vector<int> upper(26,0),lower(26,0);
    for(int i=0; i<s.size();i++){
        if(s[i]>='a'){
            lower[s[i]-'a']++;
        }
        else{
            upper[s[i]-'A']++;
        }
    }
    int cnt=0;
    bool odd=0;

    for(int i=0; i<26;i++){
        if(lower[i]%2==0){
            cnt+=lower[i];

        }
        else{
            cnt+=lower[i]-1;
            odd=1;

        }
        if(upper[i]%2==0){
            cnt+=upper[i];

        }
        else{
            cnt+=upper[i]-1;
            odd=1;
        }
    }
    if(odd==1){
        return cnt+1;

    }
    else{
        return cnt;
    }
}
int main (){
    string s;
    getline(cin,s);
    cout<<longestpalindrome(s);
}