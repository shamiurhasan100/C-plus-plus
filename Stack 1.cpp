#include <iostream>
using namespace std;
#define Size 100

class Queue
{
    int arr[Size];
    int front, back;
public:
    Queue()
    {
        front = back = -1;
    }

    void enqueue(int val)
    {
        if (back == Size - 1) // Fixed assignment error (= to ==)
        {
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1)
            front = 0; // Fixed initialization

        back++;
        arr[back] = val;
        cout << "Enqueue element " << arr[back] << endl;
    }

    void dequeue()
    {
        if (front == -1 || front > back) // Added check to prevent invalid access
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Dequeued element is " << arr[front] << endl;
        front++;
        if (front > back)
        {
            front = back = -1; // Reset queue when empty
        }
    }

    void peek()
    {
        if (front == -1 || front > back) // Fixed incorrect check
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Front element is " << arr[front] << endl;
    }

    bool isEmpty()
    {
        return (front == -1 || front > back); // Simplified logic
    }

    void display()
    {
        if (front == -1 || front > back) // Added check for empty queue
        {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front; i <= back; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.peek();
    q.display();

    return 0;
}
