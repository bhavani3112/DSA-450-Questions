Node* reverseDLL(Node * head)
{
    Node* curr = head;
    Node* temp ;
    while(curr!=NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr=curr->prev;
        
    }
    if(temp!=NULL) // Checking for empty list or list with one node
    head = temp->prev;
    return head;
}
