int intersectPoint(Node *head1, Node *head2)
{

    int d1 = 0;
    int d2 = 0;

    Node *p = head1;
    Node *q = head2;

    while (p->next != NULL)
    {
        d1++;
        p = p->next;
    }

    while (q->next != NULL)
    {
        d2++;
        q = q->next;
    }

    int d = abs(d2 - d1);

    Node *m = head1;
    Node *n = head2;

    if (d1 > d2)
    {
        for (int i = 0; i < d; i++)
            m = m-> next;
    }
    else
    {

        for (int i = 0; i < d; i++)
           n = n-> next;
    }

    while (m != NULL && n != NULL)
    {
        if (m == n)
        {
            return m->data;
        }
        m = m->next;
        n = n->next;
    }
    return -1;
