struct Node *reverse(struct Node*head)
{
    struct Node* curr=head,*prev=NULL,*Next;
    while(curr)
    {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr=Next;
    }
    head = prev;
    return head;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    int sum,carry=0;
    first = reverse(first);
    second = reverse(second);
    Node *temp,*t=first;
    while(first && second)
    {
        sum = first->data + second->data+carry;
        first->data= sum%10;
        carry = sum/10;
        temp = first;
        first = first->next;
        second = second->next;
    }
    if(second)
    temp->next=second;
    first= temp->next;
    while(first!=NULL)
    {
        sum = first->data+carry;
        first->data= sum%10;
        carry = sum/10;
        temp = first;
        first = first->next;
    }
    if(carry>0)
    temp->next = new Node(carry);
    
    first = reverse(t);
    return first;
}
