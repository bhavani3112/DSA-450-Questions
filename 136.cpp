Node* findIntersection(Node* head1, Node* head2)
{
    Node *temp = new Node(0);
    Node *head = temp;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data == head2->data)
        {
            Node *dummy = new Node(head1->data);
            temp->next = dummy;
            temp=temp->next;
            head1 = head1->next;
            head2 = head2->next;
        }
        else if(head1->data<head2->data)
        head1 = head1->next;
        else
        head2 = head2->next;
    }
    return head->next;
}
