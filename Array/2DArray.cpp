#include<iostream>
using namespace std;

int main(){
    //2D array
    int arr[100][100];


    int rows,cols;
    cin>>rows>>cols;

    //read 2d array;
    for(int i=0; i<rows;i++){
        for(int j=0; j<cols;j++){
            cin>>arr[i][j];
        }

    }
     /// printing 2d array

     for(int i=0; i<rows;i++){
        for(int j=0; j<cols;j++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;

    }

}