#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class Stack
{
private:
    T *arr;
    int top;
    int size;

public:
    Stack()
    {
        top = -1;
        arr = new T[5];
        size = 5;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(T data)
    {
        if (isFull())
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = data;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return;
        }
        top--;
    }

    T peek()
    {
        try
        {
            if (isEmpty())
                throw "Error : Stack Empty";
        }
        catch (const char *exp)
        {
            cout << exp;
        }

        return arr[top];
    }

    bool isEmpty()
    {
        return (top == -1) ? true : false;
    }

    bool isFull()
    {
        return (top == size - 1) ? true : false;
    }

    void printStack()
    {
        if (isEmpty())
            return;

        for (int i = top; i >= 0; i--)
            cout << arr[i] << endl;
    }
};

int main()
{
    // Stack<int> s;   // Stack using Integer
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.printStack();

    // s.pop();
    // s.pop();

    // cout<<endl;
    // s.printStack();

    Stack<string> s;
    s.push("Ronald");
    s.push("Bhavendra");
    s.push("Meet");
    s.printStack();

    cout << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.peek();

    return 0;
}