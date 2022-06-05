//Friendly array

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int sumOfMinAbsDifferences(int arr[], int n)
    {   
        //code here.
        sort(arr, arr+n);
        int sum=arr[1]-arr[0];
        for(int i=1;i<n-1;i++)
        {
            int no1=abs(arr[i]-arr[i-1]);
            int no2=abs(arr[i+1]-arr[i]);
            int min_no=min(no1, no2);
            sum+=min_no;
        }
        int last=abs(arr[n-1]-arr[n-2]);
        sum+=last;
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.sumOfMinAbsDifferences(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
