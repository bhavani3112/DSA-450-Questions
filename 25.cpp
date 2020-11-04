int countOccurence(int arr[], int n, int k) {
    // Your code here
    unordered_map<int,int> h;
    for(int i=0;i<n;i++)
    h[arr[i]]++;
    
    int count=0;
   for(auto i:h)
   {
       if(i.second>n/k)
       count++;
   }
   return count;
    
}
