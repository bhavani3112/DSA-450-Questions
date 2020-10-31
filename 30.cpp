#include<iostream>
using namespace std;
int mindiff(int arr[],int n,int m)
{
    int min_diff=INT_MAX;
    sort(arr,arr+n);
    for(int i=0;i+m-1<n;i++)
    {
        int diff = arr[i+m-1]-arr[i];
        if(diff<min_diff)
        {
            min_diff=diff;
        }
    }
    return min_diff;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cin>>m;
        cout<<mindiff(arr,n,m)<<endl;
    }
	return 0;
}
