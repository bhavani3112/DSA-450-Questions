#include<stack>
using namespace std;

int max_Area(int hist[],int n)
{
    stack<int>s;
    int max_area=0,i=0,tp,top_area;
    while(i<n)
    {
        if(s.empty()||hist[s.top()]<=hist[i])
        s.push(i++);
        else
        {
            tp=s.top();
            s.pop();
            top_area = hist[tp] * (s.empty()?i:i-s.top()-1);
            if(max_area<top_area)
            max_area=top_area;
        }
    }
    while(!s.empty())
    {
        tp=s.top();
        s.pop();
        top_area = hist[tp] * (s.empty()?i:i-s.top()-1);
        if(max_area<top_area)
        max_area=top_area;
    }
    return max_area;
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
	    cout<<max_Area(arr,n)<<endl;
	}
	return 0;
}
