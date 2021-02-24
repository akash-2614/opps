#include<bits/stdc++.h>
using namespace std;
#define n 10

class Stack
{
    int top = -1;
    public:

    int arr[n];

    int push(int ele)
    {
        if(top >= (n-1))
        {
            cout<<"Overflow ;-(\n";
            return 0;
        }
        else
        {
            arr[++top] = ele;
            return 0;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Underflow ;-( Stack is Empty\n";
            return;
        }
        else
        {
            cout<<"Element deleted = "<<arr[top]<<"\n";
            top--;
            return;
        }
    }
    void peek()
    {
        if(top==-1)
        {
            cout<<"Underflow ;-(\n";
            return;
        }
        else
        {
            cout<<"top element = "<<arr[top]<<endl;
            return;
        }
    }
    void isEmpty()
    {
        if(top==-1)
        {
            cout<<"Stack is empty...\n";
            return;
        }
        else
        {
            cout<<"stack is not empty...\n";
            return;
        }
    }

    void display()
    {
        if(top == -1)
        {
            cout<<"Underflow ;-(\n";
            return;
        }
        else
        {
            cout<<"Stack: ";
            for(int i=0; i<=top; ++i)
            {
                cout<<arr[i]<<"->";
            }
            cout<<endl;
            return;
        }
    }
    
    
};


int main()
{
    int ele,ch;
    Stack s;

    do
    {
        cout<<"Press\n1. for inserting a element\n2. for deleting an element\n3. to check top element\n4. to check is stack is empty\n5. to display stack\n6. exit";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            cout<<"Enter an element: ";
            cin>>ele;
            s.push(ele);
            break;

            case 2:
            s.pop();
            break;

            case 3:
            s.peek();
            break;

            case 4:
            s.isEmpty();
            break;

            case 5:
            s.display();
            break;

            default:
            cout<<"Wrong choice :-|\n";
            break;
        }
    } while (ch!=6);
    
    return 0;
}
