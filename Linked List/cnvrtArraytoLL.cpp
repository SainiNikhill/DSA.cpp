#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data ;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* converttoll(vector <int> &arr)
{
    Node* head =new Node(arr[0]);
    Node* mover=head;
    for (int i=1; i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;
}

int main(){
    vector<int> arr ={12,23,25,25};
    Node* head=converttoll(arr);
    cout<<head->data;
}