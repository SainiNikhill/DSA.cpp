#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
    data=data1;
    next=nullptr;}


    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    
};

Node* converttoll(vector<int> &arr ){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;

}





// insertion at  Beggining

Node* insertel(Node* head,  int value){
    
{
    Node* temp=new Node(value, head);
    return temp;
}

}

// inserting at the end;

Node* insertend(Node* head , int value){
    if(head==NULL) return  new Node(value);


     Node* temp=head;
     Node* temp1=new Node(value);
     while(temp->next!=NULL)
     {
        temp=temp->next;
     }
     temp->next=temp1;
     return head;}


// insertig at  kth location 

Node* insertatk(Node* head, int value, int k)
{
    if(head==NULL) 
    {
        if(k==1){
            return new Node(value);
        }
        else return NULL;

    }

    //insert at head
    if(k==1)
    {
        Node* temp=new Node (value,head);
    }
    int cnt=0;
    Node* temp=head;
    Node* newnode=new Node(value);
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k-1){
            newnode->next=temp->next;
            temp->next=newnode;
            break;
            
            
        }
        temp=temp->next;
    }
    return head;
}



void print(Node* head){
    while(head!=NULL) 
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;


}

int main(){
    vector<int> arr={12,13,15,14,15};
    Node* head= converttoll(arr);
    cout<<"head of the list is :"<<head->data<<endl;
    print(head);

    head=insertel(head,100);
    cout<<"new head is:"<<head->data<<endl;
    print(head);

    head= insertend(head,80);
    print(head);



    head=insertatk(head , 200 ,5);
    print(head);
}

