Node* segregate(Node *head) {
    
    Node *curr = head;
    int count0 =0,count1=0,count2=0;
    while(curr)
    {
        if(curr->data==0)
        count0++;
        else if(curr->data==1)
        count1++;
        else
        count2++;
        curr=curr->next;
    }
    Node *temp = new Node(0);
    Node *head1 = temp;
    int i=1;
    while(i<=count0)
    {
        Node *dummy = new Node(0);
        temp->next = dummy;
        temp=temp->next;
        i++;
    }
    i=1;
    while(i<=count1)
    {
        Node *dummy = new Node(1);
        temp->next = dummy;
        temp=temp->next;
        i++;
    }
    i=1;
    while(i<=count2)
    {
        Node *dummy = new Node(2);
        temp->next = dummy;
        temp=temp->next;
        i++;
    }
    
    return head1->next;
}
