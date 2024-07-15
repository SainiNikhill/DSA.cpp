#include<bits/stdc++.h>
using namespace std;

// node creation
class Node{

    public:
    int data;
    Node* next;
    Node* prev;


    public:
    Node(int data1){
        prev=nullptr;
        data=data1;
        next=nullptr;
    }
    Node( Node* prev1,int data1,  Node* next1){
        prev=prev1;
        data=data1;
        next=next1;

    }

};

Node* convertArrToLL(vector<int> &arr)
{
  Node* head= new Node(arr[0]);
  Node* prev=head;
  for( int i=1; i<arr.size();i++)
  {
    Node* temp=new Node(prev,arr[i], nullptr);
    prev->next=temp;
   
    prev=temp;
  }
  return head;

}

void print( Node* head){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}



int main( ){
    vector<int> arr={12,14,15,66,35,664,345,456};
    Node* head=convertArrToLL(arr);
    cout<<head->prev;
    print(head);

}