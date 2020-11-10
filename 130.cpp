void start_point_of_the_Loop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (head == NULL || head->next == NULL)
        return;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
    
    if (slow == fast)
    {
        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        cout<<slow->data<<endl;
    }
}
