void sorted_insert(stack<int>&s,int x)
{
    if(s.size()==0 || x>=s.top())
    {
        s.push(x);
        return;
    }
    
    else
    {
        int a = s.top();
        s.pop();
        sorted_insert(s,x);
        s.push(a);
        return;
    }
}
void SortedStack :: sort()
{
   if(s.size()==1)
   return;
   else
   {
       int x = s.top();
       s.pop();
       sort();
       sorted_insert(s,x);
       return ;
   }
}
