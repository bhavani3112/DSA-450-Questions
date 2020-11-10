#include <iostream>
using namespace std;

void sortarray(int arr[],int n)
{
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        count0++; // Counting 0
        else if(arr[i]==1)
        count1++; // Counting 1
        else if(arr[i]==2)
        count2++; // Counting 2
    }
    for(int i=0;i<count0;i++)
    arr[i]=0;
    for(int i=count0;i<count0+count1;i++)
    arr[i]=1;
    for(int i=count0+count1;i<n;i++)
    arr[i]=2;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    
    
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
	    
	    sortarray(arr,n);
	}
	return 0;
}
