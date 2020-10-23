using namespace std;
using namespace std;
int minheight(int arr[],int n,int k)
{
    sort(arr,arr+n);
    if(n==1)
    return 0;
    int ans = arr[n-1]-arr[0];
    int small=arr[0]+k;
    int big=arr[n-1]-k;
   
     for(int i=0;i<n;i++)
      {
          int sub = arr[i]-k;
          int add = arr[i]+k;
          if(sub>=small || add<=big)
          continue;
          // If the difference decreases or addition increases than 
          // the standard values 
          else if(big-sub<=add-small)
          small = sub;
          else
          big =add;
       }
       return min(ans,big-small);
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<minheight(arr,n,k)<<endl;
    }
	return 0;
}
