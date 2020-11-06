#include<iostream>
using namespace std;

int minswaps(int arr[],int n,int k)
{
   int count = 0; 
    for (int i = 0; i < n; ++i) 
        if (arr[i] <= k) 
            ++count;
    int bad = 0; 
    for (int i = 0; i < count; ++i) 
        if (arr[i] > k) 
            ++bad;
    int ans = bad; 
    for (int i = 0, j = count; j < n; ++i, ++j) 
    { 
        if (arr[i] > k) 
            --bad;
        if (arr[j] > k) 
            ++bad; 
        ans = min(ans, bad); 
    } 
    return ans; 
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    cout<<minswaps(arr,n,k)<<endl;
	}
	return 0;
}
