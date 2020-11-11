struct node *reverse (struct node *head, int k)
{ 
    if (head == NULL) 
        return head; 
  
    // Create deque to store the address 
    // of the nodes of the linked list 
    deque<node*> q;
    node* current = head; 
    int i;
    while (current != NULL) { 
        i = 1; 
        while (i <= k) { 
            if (current == NULL) 
                break; 
            q.push_back(current); 
            current = current->next; 
            i++; 
        } 
  
        /* pop first and the last value from  
        the deque and swap the data values at  
        those addresses */
        
        while (!q.empty()) { 
            node* front = q.front(); 
            node* last = q.back(); 
            swap(front->data, last->data); 
  
            // pop from the front if 
            // the deque is not empty 
            if (!q.empty()) 
                q.pop_front(); 
  
            // pop from the back if 
            // the deque is not empty 
            if (!q.empty()) 
                q.pop_back(); 
        } 
    } 
    return head;
}
