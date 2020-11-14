vector <long long> nextLargerElement(long long arr[], int n)
{
   vector<long long> result(n);
   stack <long long> s;
   for(int i=n-1;i>=0;i--)
   {
       while(!s.empty() && s.top()<=arr[i])
       s.pop();
       if(s.empty())
       result[i]=-1;
       else
       result[i]=s.top();
       
       s.push(arr[i]);
   }
   return result;
}
