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

ListNode *takeInput()
{
    int val;
    cin >> val;

    ListNode *head = NULL;
    ListNode *tail = NULL;

    while (val != -1)
    {
        ListNode *n = new ListNode(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        cin >> val;
    }

    return head;
}
ListNode *merge(ListNode *list1, ListNode *list2)
{
    ListNode *ptr1 = list1;
    ListNode *ptr2 = list2;
    ListNode *dummyListNode = new ListNode(-1);
    ListNode *ptr3 = dummyListNode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->val < ptr2->val)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return dummyListNode->next;
}

ListNode *mergeRecursive(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    ListNode *result;
    if (list1->val < list2->val)
    {
        result = list1;
        result->next = mergeRecursive(list1->next, list2);
    }
    else
    {
        result = list2;
        result->next = mergeRecursive(list1, list2->next);
    }
    return result;
}
ListNode *print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    ListNode *list1 = takeInput();
    ListNode *list2 = takeInput();
    ListNode *ans = merge(list1, list2);
    print(ans);

    return 0;
}