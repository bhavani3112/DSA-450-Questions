vector<int> threeWayPartition(vector<int> A, int a, int b)
{
     vector<int> res;
     int n = A.size();
     for(int i=0;i<n;i++)
     {
         if(A[i]<a)
         res.push_back(A[i]);
     }
     for(int i=0;i<n;i++)
     {
         if(A[i]>=a && A[i]<=b)
         res.push_back(A[i]);
     }
     for(int i=0;i<n;i++)
     {
         if(A[i]>b)
         res.push_back(A[i]);
     }
     return res;
}
