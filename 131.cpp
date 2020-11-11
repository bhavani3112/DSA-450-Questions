Node *removeDuplicates(Node *root)
{
    Node *curr=root,*temp=root->next;
    while(curr!=NULL && temp!=NULL)
    {
        if(curr->data==temp->data)
        temp=temp->next;
        else
        {
            curr->next=temp;
            curr=curr->next;
            temp=temp->next;
        }
    }
    curr->next=NULL;  // for cases 5 5 5 5
    return root;
}
