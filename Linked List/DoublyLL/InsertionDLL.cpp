#include<bits/stdc++.h>
using namespace std;


class Node{

    public:
    int data;
    Node* back;
    Node* next;

    public:
    Node(int data1){

        data=data1;
        back=nullptr;
        next=nullptr;
    
    }
    Node( Node* back1, int data1, Node* next1){
        data=data1;
        back=back1;
        next=next1; 
    }
};

Node* convertArrToLinkedList( vector<int> & arr)
{
    Node* head=new Node( arr[0]);
    Node* prev=head;
    for ( int i=1; i<arr.size(); i++)
    {
        Node* temp=new Node( prev, arr[i],nullptr);
        prev->next=temp;
        prev=temp;


    }
    return head;
}

// insertion before head ;
Node* insertBeforeHead(Node* head, int value)

{
    Node* newnode = new  Node( nullptr, value,head);
    head->back=newnode;
    return newnode;

}


//insetion before tail;
Node* insertBeforeTail(Node* head,int value)
{   

    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    Node* front=temp->next;
    Node* newnode=new Node(temp,value,front);
    temp->next=newnode;
    front->back=newnode;
    return head;
}
Node* insertBeforeKth(Node* head, int value,int k)

{
    if(head!=NULL){
    if(k==1)
    {
        head=insertBeforeHead(head,value);

    }

     int cnt=0;
     Node* temp=head;
     while(temp!=NULL)
     {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;

        
     }
     Node* prev=temp->back;
     Node* newnode =new Node( prev,value,temp);
     temp->back=newnode;
     prev->next=newnode;
     return head;
     }
     
     
     else
     {

        return NULL;
     }

}


void  insertBeforeNode(Node* node,  int value)
{
    
    Node* prev=node->back;
    Node* newnode= new Node( prev, value, node );
    prev->next=newnode;
    node->back=newnode;
    
}

void print( Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


int main()
{
     vector<int> arr={1,2,3,4,5,6,7,8,9};
     Node* head=convertArrToLinkedList(arr);
     print(head);

     head=insertBeforeHead(head,78);
     print(head);

     head=insertBeforeTail(head,99);
     print(head);

     head=insertBeforeKth(head,101,5);
     print(head);

     insertBeforeNode(head->next->next, 26);
     print (head);
}