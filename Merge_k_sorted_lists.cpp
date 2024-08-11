#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int n;
    struct node *next;
} node;
// ! On 32-bit systems, the size of a generic pointer is typically 4 bytes
node *insert_last(int n, node *head)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->n = n;
    temp->next = NULL;
    if (head == NULL)
        return temp;
    head->next = temp;
    return temp;
}
node *insert_front(int n, node *head)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->n = n;
    temp->next = head;
    return temp;
}
void printList(node *head)
{
    cout << "List is : ";
    while (head)
    {
        cout << head->n << " ";
        head = head->next;
    }
    cout << endl;
}
node *merge(node *l1, node *l2)
{
    node *n1 = l1, *n2 = l2, *prev = l1, *temp;
    if (!l1)
        return l2;
    if (!l2)
        return l1;
    while (l1 && l2)
    {
        if (l1->n >= l2->n)
        {
            if (l1 == n1)
            {
                temp = l2->next;
                l2->next = l1;
                prev = n1 = l1 = l2;
                l2 = temp;
            }
            else
            {
                prev->next = l2;
                prev = l2;
                temp = l2->next;
                prev->next = l1;
                l2 = temp;
            }
        }
        else
        {
            prev = l1;
            l1 = l1->next;
        }
    }
    if (l2 != NULL)
        prev->next = l2;
    return l1;
}
int main()
{
    int n, x;
    node *head = NULL, *last = NULL, *right;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elemenet " << (i + 1) << " : ";
        cin >> x;
        if (head == NULL)
            last = head = insert_last(x, head);
        else
            last = insert_last(x, last);
    }
}