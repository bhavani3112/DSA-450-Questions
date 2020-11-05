#include <bits/stdc++.h>
using namespace std;

int Kthsmallestelement(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
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
	    cout<<Kthsmallestelement(arr,n,k)<<endl;
	}
	return 0;
}

// I will Add the optimised solution when I start Solving Heaps
