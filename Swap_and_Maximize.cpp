//Swap and Maximize
/*
Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ N ≤ 105
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    if(n<=1)
    return 0;
    sort(arr, arr+n);
    long long int sum=0;
    int j=n-1;
    int i=0;
    int t=0;
    while(i<j)
    {
        sum+=abs(arr[j]-arr[i]);
        if(t%2==0)
            i++;
        else
            j--;
        t++;
    }
    if(n&1)
    {
        sum+=abs(arr[j]-arr[0]);
    }
    else
    {
        sum+=abs(arr[j]-arr[0]);
        
    }
    return sum;
}
