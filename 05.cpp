#include <bits/stdc++.h>
using namespace std;

void shift(int arr[],int left ,int right)
{
    int end = right;
    while(left<=right)
    {
        // if left and right elements are negative
        if(arr[left]<0 && arr[right])
        left--;
        // if left is positive and right is negative
        else if(arr[left]>0 && arr[right]<0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = arr[left];
            left--;
            right++;
        }
        // if left and right elements are positive
        else if(arr[left]>0 && arr[right]>0)
        right--;
        // if left is negative and right is positive
        else
        {
            left++;
            right--;
        }      
    }
    for(int i=0;i<end;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
	int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        shilft(arr,0,n-1)<<endl;
    }
	return 0;
}
