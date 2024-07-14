// check if the element present in the linked list 
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

Node* findhead(vector<int> &arr){
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

bool searchelement(Node* head, int val)
{
    Node*temp=head;
    while(temp)
    {
        if(temp->data==val) return true;
        temp=temp->next;
    }
    return false;
}


int main(){
    vector<int>arr={12,14,24,25,46,24,29};
    Node* head=findhead(arr);
    cout<<head->data<<endl;
    int n;
    cout<<"search element:";
    cin>>n;
    cout<<searchelement(head,n);


}

