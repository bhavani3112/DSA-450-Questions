#include<iostream>
using namespace std;

int inversions(int arr[],int n) // O(n^2) Approach
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            count++;
        }
    }
    return count;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<inversions(arr,n)<<endl;
	}
	return 0;
}
