void insert(stack<int>&s,int x)
{
    if(s.size()==0)
    {
        s.push(x);
        return;
    }
    
    else
    {
        int a = s.top();
        s.pop();
        insert(s,x);
        s.push(a);
        return;
    }
}
void reverse()
{
   if(s.size()==0)
   return;
   else
   {
       int x = s.top();
       s.pop();
       reverse();
       insert(s,x);
       return ;
   }
}
