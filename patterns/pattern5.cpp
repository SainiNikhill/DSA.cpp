/*
*
**
***
****
*****
******
*/

/*
1
22
333
4444
55555
 */

#include<iostream>


using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
     int i=1;
     while(i<=n){
        int j=1;
        while(j<=i){
            //cout<<" "<<"*";
            cout<<i;
            j=j+1;

        }
        cout<<endl;
        i=i+1;

     }
     
}