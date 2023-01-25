#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *createCycle(ListNode *head, int pos)
{
    int i = 0;
    ListNode *temp = head;
    ListNode *temp2 = head;

    while (temp->next != NULL)
    {
        if (i == pos)
            temp2 = temp;

        temp = temp->next;
        i++;
    }
    temp->next = temp2;
    return head;
}

bool hasCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}

void display(ListNode *head)
{
    ListNode *temp = head;
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(2);
    ListNode *n3 = new ListNode(3);
    ListNode *head = n1;
    n1->next = n2;
    n2->next = n3;

    // ListNode *res = createCycle(head, 1);
    if (hasCycle(head))
        cout << "yes";
    else
        cout << "no";

    return 0;
}