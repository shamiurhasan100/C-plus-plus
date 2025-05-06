#include<iostrteam>
using namespace std;
struct Node
{
    int data;
    Node*next;
};
//insert at  the beginning
void insertAtBeginning (int value)
{
    node* newNode= new New();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

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

    Node*temp=head;
    for (int i=1; i<position-1&&temp!=NULL; i++)
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
}
