queue<ll> modifyQueue(queue<ll> q, int k)
{
    queue<ll> q1;
    stack<ll> s;
    while (k--) 
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q1.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }
    return q1;
}
