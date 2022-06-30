#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
    T *arr;
    int front;
    int rear;
    int cnt;
    int size;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        arr = new T[5];
        size = 5;
        cnt = 0;
    }
    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(T data)
    {
        if (isFull())
        {
            cout << "Queue Full" << endl;
            return;
        }
        if (rear == -1)
        {
            rear = 0;
            front = 0;
        }
        else
            rear = (rear + 1) % size;

        arr[rear] = data;
        cnt++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout<<"Empty Queue"<<endl;
            return;
        }

        if (cnt == 1)
        {
            front = -1;
            rear = -1;
        }
        else
            front = (front + 1) % size;
        cnt--;
    }

    bool isEmpty()
    {
        return (cnt == 0) ? true : false;
    }

    T peek()
    {
        try
        {
            if (isEmpty())
                throw "Error : Queue Empty";
        }
        catch (const char *exp)
        {
            cout << exp;
        }
        return arr[front];
    }

    bool isFull()
    {
        return (cnt == size) ? true : false;
    }

    void printQueue()
    {
        if (isEmpty())
        {
            cout<<"Queue Empty"<<endl;
            return;
        }

        cout<<"--Printing Queue--"<<endl;
        for (int i = front; i <= rear; i++)
            cout << arr[i % size] << endl;
    }
};

int main()
{
    Queue<string> *q = new Queue<string>();
    q->enqueue("Ronald");
    q->enqueue("Patrick");
    q->enqueue("Bhavendra");
    q->enqueue("Meet");
    q->enqueue("Meet1");
    q->enqueue("Meet2");

    cout << q->peek()<<endl;
    q->printQueue();

    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->dequeue();

    q->printQueue();

    // Queue<int> *qt = new Queue<int>();
    // qt->enqueue(10);
    // qt->enqueue(20);

    // cout<<qt->peek()<<endl;
    // qt->dequeue();
    // qt->printQueue();
    // qt->dequeue();
    // qt->dequeue();
    return 0;
}