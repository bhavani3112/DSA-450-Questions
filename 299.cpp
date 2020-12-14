void helper(queue<long long int> &q)
{
    if(q.size()<=1)
    return;
    long long int p = q.front();
    q.pop();
    helper(q);
    q.push(p);
    return ;
}

queue<long long int> rev(queue<long long int> q)
{
    helper(q);
    return q;
}
