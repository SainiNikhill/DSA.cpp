#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;
    public:
    Node(int data1)
    {
        data=data1;
        prev=next=nullptr;

    }
};
Node* convertArrToLinkedList( vector<int> & arr)
{
    Node* head=new Node( arr[0]);
    Node* prev=head;
    for ( int i=1; i<arr.size(); i++)
    {
        Node* temp=new Node( arr[i]);
        prev->next=temp;
        prev=temp;


    }
    return head;
}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;

    }
    cout<<endl;
}
// reverse DLL using stack
// time complexity of o(2N)

void reverseDll(Node* head)
{
    stack <int>st;
    Node* temp=head;
    while(temp!=NULL)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        temp->data=st.top();
        st.pop();
        temp=temp->next;

    }
}

// now we use pointer swap approach it is similar to the swapping of two variables

Node* reverseDLLbyswapping(Node * head)
    {
        //Your code here
        if( head==NULL || head->next==NULL)
        {
            return head;
            
        }
        Node* current=head;
        Node*  last=NULL;
        while(current!=NULL)
        {
            last=current->prev;
            current->prev=current->next;
            current->next=last;
            current=current->prev;
            
        }
        Node* newhead =last->prev;
        return newhead;
        
    }

int main()
{
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArrToLinkedList(arr);
    cout<<" orignal DLL: ";
    print(head);

    cout<<"reversed DLL using stack: ";
    reverseDll(head);
    print(head);

    cout<<"reversed by swapping pointers: ";
    head=reverseDLLbyswapping(head);
    print(head);


}