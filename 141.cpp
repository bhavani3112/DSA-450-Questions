bool isCircular(Node *head)
{
    if(head==NULL)
    return false;
    
    Node *curr=head;
    while(curr->next!=head && curr->next!=NULL)
        curr=curr->next;
    if(curr->next==head)
        return true;
    else
       return false;
}
