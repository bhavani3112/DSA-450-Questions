Node *reverse(Node *head)
{
    Node *prev=NULL,*curr=head,*Next;
    while(curr!=NULL)
    {
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr = Next;
    }
    head = prev;
    return head;
}

Node* addOne(Node *head) 
{
    Node *temp = reverse(head);
    int carry=0;
    Node *temp1=temp,*temp2;
    temp->data = temp->data+1;
    while(temp!=NULL)
    {
        if(temp->data+carry==10)
        {
            temp->data=0;
            carry = 1;
        }
        else
        {
            temp->data+=carry;
            carry=0;
        }
        temp2 = temp;
        temp=temp->next;
    }
    if(carry==1)
    {
        Node *h = new Node(1);
        temp2->next=h;
    }
    head = reverse(temp1);
    return head;
    
}
