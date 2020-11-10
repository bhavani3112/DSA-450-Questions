/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    struct Node* previous = NULL,*Next = NULL;
    struct Node* current = head;
    while(current!=NULL)
    {
        Next = current->next;
        current->next = previous;
        previous = current;
        current = Next;
    }
    head=previous;
    return head;
}
// recursive
struct Node* reverseList(struct Node *head)
{
    if(head==NULL || head->next=NULL)
    return head;

    struct Node *last = reverseList(head->next);
    head->next->next = head;

    head->next = NULL;
    return last; 

}
