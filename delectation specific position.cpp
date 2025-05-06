#include<iostream>
using namespace std;
struct Node
{
    int data;  //node 2 part
    Node*next; //data , pointer
};
Node *head=NULL;

//insert at  the beginning
void insertAtBeginning (int value)
{
    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void display() // print er jonno
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtPosition (int position)
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;

    }
    if(position==1)
    {
        Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node *temp=head;
    for (int i=1; i<position-1 && temp!=NULL; i++)
    {
        temp=temp->next;
    }
  Node* nodetoDelete = temp->next;
    temp->next = temp->next->next; 
    delete nodetoDelete;
}

int main()
{
    insertAtBeginning(30);
    insertAtBeginning(20);
    insertAtBeginning(10);
    insertAtBeginning(5);

    cout<<"after inserting at beginning: ";
    display();
    
    deleteAtPosition(3);
    cout<<"After deleteing position 3: ";
    
    return 0;
    
}


