#include <bits/stdc++.h>
using namespace std;
Node *reverse_LL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *chotahead = reverse_LL(head->next);
    head->next->next = head;
    head->next = NULL;
}

int main()
{

    // suppose we have made a linked list
    reverse_LL(head);

    return 0;
}