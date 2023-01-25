#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp1=head1;
    Node* temp2=head2;
    int c1=0,c2=0;
    while(temp1)
    {
        c1++;
        temp1=temp1->next;
    }
    while(temp2)
    {
        c2++;
        temp2=temp2->next;
    }
    int diff=abs(c1-c2);
    int res;
    temp1=head1;
    temp2=head2;
    
    if(c1>c2)
    {
        int i=0;
        while(temp1 && i<diff)
        {
            i++;
            temp1=temp1->next;
        }
    }
    else
    {
        int i=0;
        while(temp2 && i<diff)
        {
            i++;
            temp2=temp2->next;
        }
    }
    cout<<temp1->data<<" "<<temp2->data<<endl;
     while(temp1 && temp2)
        {
            if(temp1->next == temp2->next)
            {
                res=temp1->next->data;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    return res;
}
int main()
{

   return 0;
}