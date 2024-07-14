#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;

    }

};
// deletion from head
Node* DeleteHead(Node* head)
{
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;


}

//deletion from Tail
Node* Deletetail(Node* head)
{
    if( head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    
    while(temp->next->next!=NULL)
    {
          temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;

}
// delete at kth position 

Node* Deletek(Node* head, int k)
{
    if(head==NULL) return head;
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    int cnt=0; 
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            prev->next=prev->next->next;
            delete temp;
            break;

        }
        prev = temp;
        temp=temp->next;
    }
    return head;
}



Node* convertarrtoll(vector<int> &arr)
{
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


void print( Node* head)
{
   while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
   }
   cout<<endl;
}

int main()
{
    vector<int> arr={ 12,15,35,67,35,89};
    Node* head=convertarrtoll(arr);
    print(head);

    head=Deletek(head,6);
    print(head);
}
