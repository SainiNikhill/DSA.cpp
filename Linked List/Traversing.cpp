// in this file we traversed over a linked list and calculated its length 


#include<bits/stdc++.h>


using namespace std;
struct Node{
    public:
    int data;
    struct Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;

    }

};
Node* convertToArrToLL(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;
}
// calculating length of the linked list 

int calculatelength(Node* head)
{
    int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    int n=0;
    cin>>n;
    int a;
    vector<int> arr;
    for(int i=0; i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    Node* head=convertToArrToLL(arr);
    cout<<"the head of the linked list is:"<<head->data<<endl;
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
    cout<<"the length of the linked list is :"<<calculatelength(head);

}