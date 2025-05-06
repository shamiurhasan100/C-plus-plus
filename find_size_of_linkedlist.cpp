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

//for find position
void insertAtPosition(int value,int position)
{
    Node*newNode= new Node();
    newNode->data=value;
    if(position==1)
    {
        newNode->next=head;
        head=newNode;
        return;
    }
//insert at certain position
    Node*temp=head;
    for (int i=1; i<position-1 && temp!=NULL; i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void display()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int linkedListSize() { //function call
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    insertAtBeginning(30);
    insertAtBeginning(20);
    insertAtBeginning(10);

    cout<<"after inserting at beginning: ";
    display();
    int count=linkedListSize();
    cout << "Size of the linked list: "<<count<<endl ;

    insertAtPosition(25,3);
    cout<<"after inserting 25 at Position 3: ";
    display();

    int size=linkedListSize();
    cout << "Size of the linked list: "<<size ;



    return 0;
}
