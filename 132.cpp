Node * removeDuplicates( Node *head) 
{
    Node *curr = head,*duplicate;
    while(curr && curr->next)
    {
        Node *temp=curr;
        while(temp->next)
        {
            if(temp->next->data==curr->data)
            {
                duplicate = temp->next;
                temp->next = temp->next->next;
                delete(duplicate);
            }
            else
            temp=temp->next;
        }
        curr=curr->next;
    }
    return head;
}
