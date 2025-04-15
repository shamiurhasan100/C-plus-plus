#include <iostream>
using namespace std;
#define Size 100
class Stack
{
    int arr[50];
    int top;

public:
    Stack()
    {
        top= -1;
    }

    void push(int val)
    {
        if(top== Size-1)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }
    void pop()
    {
        if(top==1)
        {
            cout<<"Stack is empty"<<endl;
        }
        cout<<"Top element is "<<arr[top];
        top--;
    }

    void peek()
    {
        cout<<arr[top];

    }
    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    void display()
    {
        for(int i=top; i>=0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);
    s.display();
return 0;
}
