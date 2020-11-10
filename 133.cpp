void moveToFront(Node *head)  
{
    if (head == NULL || head->next== NULL)  
        return;  
  
   
    Node *second_last = NULL;  
    Node *last = head;  
  
    /*After this loop second_last contains 
    address of second last node and  
    last contains address of last node in Linked List */
    
    while (last->next != NULL)  
    {  
        second_last = last;  
        last = last->next;  
    }  
  
    /* Set the next of second last as NULL */
    second_last->next = NULL;  
  
    /* Set next of last as head node */
    last->next = head;  
  
    /* Change the head pointer 
    to point to last node now */
    head = last;  
}  
