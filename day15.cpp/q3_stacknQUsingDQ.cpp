#include <bits/stdc++.h>
using namespace std;

struct deQueue
{
    int value;
    struct deQueue *next;
    struct deQueue *prev;
};
class Deque
{
    deQueue *head;
    deQueue *tail;

public:
    Deque()
    {
        head = tail = NULL;
    }
    bool isEmpty()
    {
        if (head == NULL)
            return true;
        return false;
    }
    int size()
    {
        int len = 0;
        deQueue *temp = head;
        if (!isEmpty())
        {
            while (temp)
            {
                len++;
                temp = temp->next;
            }
            return len;
        }
        return 0;
    }
    void insert_first(int x)
    {
        deQueue *newNode = new deQueue[sizeof(deQueue)];
        newNode->value = x;

        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else
        {
            head->prev = newNode;
            newNode->next = head;
            newNode->prev = NULL;
            head = newNode;
        }
    }

    void insert_last(int x)
    {
        deQueue *newNode = new deQueue[sizeof(deQueue)];
        newNode->value = x;

        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = NULL;
            tail = newNode;
        }
    }
    int remove_first()
    {
        deQueue *toDlt;
        if (!isEmpty())
        {
            toDlt = head;
            head = head->next;
            if (head)
                head->prev = NULL;
            if (head == NULL)
                tail = NULL;
            return;
        }
    }
    int remove_last()
    {
        deQueue *toDlt;
        if (!isEmpty())
        {
            toDlt = tail;
            tail = tail->prev;
            if (tail)
                tail->next = NULL;
            if (tail == NULL)
                head = NULL;
            return;
        }
    }

    void display()
    {
        // if list is not empty
        if (!isEmpty())
        {
            deQueue *temp = head;
            while (temp != NULL)
            {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
            return;
        }
        cout << "List is Empty" << endl;
    }
};
class Stack : public Deque
{
public:
    // push to push element at top of stack
    // using insert at last function of deque
    void push(int element)
    {
        insert_last(element);
    }

    // pop to remove element at top of stack
    // using remove at last function of deque
    void pop()
    {
        remove_last();
    }
};

// class to implement queue using deque
class Queue : public Deque
{
public:
    // enqueue to insert element at last
    // using insert at last function of deque
    void enqueue(int element)
    {
        insert_last(element);
    }

    // dequeue to remove element from first
    // using remove at first function of deque
    void dequeue()
    {
        remove_first();
    }
};

// Driver Code
int main()
{
    // object of Stack
    Stack stk;

    // push 7 and 8 at top of stack
    stk.push(7);
    stk.push(8);
    cout << "Stack: ";
    stk.display();

    // pop an element
    stk.pop();
    cout << "Stack: ";
    stk.display();

    // object of Queue
    Queue que;

    // insert 12 and 13 in queue
    que.enqueue(12);
    que.enqueue(13);
    cout << "Queue: ";
    que.display();

    // delete an element from queue
    que.dequeue();
    cout << "Queue: ";
    que.display();

    cout << "Size of Stack is " << stk.size() << endl;
    cout << "Size of Queue is " << que.size() << endl;
    return 0;
}