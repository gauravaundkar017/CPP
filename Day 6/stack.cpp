#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[10];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int n)
    {
        if (top >= 9)
        {
            cout << "Full" << endl;
        }
        else
        {
            arr[++top] = n;
        }
    }

    int pop()
    {
        if (top < 0)
        {
            cout << "Empty" << endl;
            return -1; // Indicate error condition
        }
        else
        {
            return arr[top--];
        }
    }

    void display() const
    {
        cout << "Array : ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(8);
    s.push(9);
    s.display();

    int a = s.pop();

    cout << "\nPopped: " << a << endl;
    a = s.pop();

        cout << "Popped: " << a << endl;
    a = s.pop();
    if (a != -1)
        cout << "Popped: " << a << endl;

    s.display();

    return 0;
}
