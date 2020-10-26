#include <bits/stdc++.h>
using namespace std;

void find(int arr[],int n,int k)
{
    int start=-1,finish=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            start=i;
            break;
        }
    }
    for(int i=start;i<n;i++)
    {
        if(arr[i]==k)
        finish = i;
        else
        break;
    }
    if(start==-1)
    cout<<"-1"<<endl;
    else
    cout<<start<<" "<<finish<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    find(arr,n,k);
	}
	return 0;
}
