// Doubly linked list == is a bi directinal linked list it has three properties (data , next and previous);

class Node{

    public:
    int data;
    Node* next;
    Node* previous;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        previous=nullptr;

    }
    Node(Node* previous1 , int data1, Node* next1){
        previous=previous1;
        data=data1;
        next=next1;

    }
};
