int getNthFromLast(Node *head, int n)
{
    Node *slow = head;
    Node *fast = head;
    while(n!=1 && fast)
    {
        fast = fast->next;
        n--;
    }
    if(fast==NULL)
    return -1;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
    
}
