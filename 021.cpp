#include<iostream>
using namespace std;

bool subarray_with_sum_0(int arr[],int n)
{
    unordered_set<int>map;
    int curr_sum =0;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        if(curr_sum==0 || map.find(curr_sum)!=map.end())
        return true;
        map.insert(curr_sum);
    }
    return false;
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
        if(subarray_with_sum_0(arr,n))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	return 0;
}
