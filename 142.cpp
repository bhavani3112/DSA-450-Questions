void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *slow =head;
    Node *fast =head;
    while(fast->next!=head && fast->next->next!=head)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast->next==head)// for odd no of nodes
    {
        fast->next=slow->next;
        *head2_ref=fast->next;
    }
     if(fast->next->next==head)//for even no. of nodes
     {
         fast=fast->next;
         fast->next=slow->next;
         *head2_ref=fast->next;
     }
     slow->next=head;
     *head1_ref=head;
}
