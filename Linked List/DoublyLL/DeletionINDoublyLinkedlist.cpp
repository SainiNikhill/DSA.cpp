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


void print( Node* head){

    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

// deleting first Node // 
Node* deleteHead( Node* head)
{
    if(head==NULL || head->next==NULL) return NULL;

   
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;

}

// delete a tail

Node* DeleteTail(Node* head)
{
    if (head==NULL || head -> next== NULL) return NULL;
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    Node* prev=temp->back;
    temp->back=nullptr;
    prev->next=nullptr;
    delete temp;

    return head;
    
}

// deleting kth element
Node* deletingKthElement(Node* head ,int k){
   if(head==NULL) return NULL;
   Node* temp=head;
   int cnt=0;
   while( temp!=NULL){
    cnt++;
    if(cnt==k) break;

    temp=temp->next;

   }
   Node* prev=temp->back;
   Node* front=temp->next;

   if(prev==NULL && front== NULL)
   {
    delete temp;
    return head;
   }
   else if(prev==NULL)
   {
    head=deleteHead(head);
    return head;
   }
   else if(front==NULL){
    head=DeleteTail(head);
    return head;
   }

    prev->next=front;
    front->back=prev;
    temp->back=nullptr;
    temp->next=nullptr;
    delete temp;
    
   
   return head;

} 

void deleteNode( Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;

    if( front==NULL)
    {
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return;

    }
    prev->next=front;
    front->back=prev;

    temp->back=temp->next=nullptr;
    delete temp;
}



int main( ){

    vector <int> arr ={ 12,13,45,67,23,45,78,97,44};
    Node* head=convertArrToLinkedList(arr);
    cout<<"the orignal List  is:  ";
    print(head);


    cout<<"List after deleting head: ";
    head=deleteHead(head);
    print(head);


    cout<<"list after deleting tail Node: ";
    head=DeleteTail(head);
    print(head);
    


    cout<<"list elements after deleting kth node: ";
    head=deletingKthElement(head , 7);
    deleteNode(head->next);
    print(head);}