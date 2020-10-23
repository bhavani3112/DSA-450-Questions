#include <bits/stdc++.h>
using namespace std;

int kadanes(int arr[],int n)
{
    int curr_sum=arr[0],best_sum=arr[0];
    for(int i=1;i<n;i++)
    {
        curr_sum+=arr[i];
        if(curr_sum<0)
        curr_sum=0;
        if(arr[i]>curr_sum)
        curr_sum=arr[i];
        if(best_sum<curr_sum && curr_sum!=0)
        best_sum=curr_sum;
    }
    return best_sum;
}

int main() {
	int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<kadanes(arr,n)<<endl;
    }
	return 0;
}
