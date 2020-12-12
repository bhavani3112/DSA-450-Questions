void QueueStack :: push(int x)
{
    q1.push(x);
}

int QueueStack :: pop()
{
    if(q1.empty() && q2.empty())
    return -1;
    int p;
    if(!q1.empty())
    {
        while(!q1.empty())
        {
            p = q1.front();
            q1.pop();
            if(q1.empty())
            break;
            else
            q2.push(p);
        }
    }
    else
    {
        while(!q2.empty())
        {
            p = q2.front();
            q2.pop();
            if(q2.empty())
            break;
            else
            q1.push(p);
        }
    }
    return p;
}
