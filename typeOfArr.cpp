/*
Type of array
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
3 <= N <= 10^5
1 <= A[] <= 10^12
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  
    public:
    pair<long long, int> maxNtype(long long arr[], long long n)
    {
        //code here.
        int m=0, in=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>m)
            {
                m=arr[i];
                in=i;
            }
        }
        pair<long long, int> p;
        p.first =m;
        if(in==n-1&&arr[n-2]>arr[n-3])
        {
            p.second=1;
        }
        else if(in==0&&arr[1]>arr[2])
        {
            p.second=2;
        }
        else if(arr[in-1]<arr[in+1])
        {
            p.second=3;
        }
        else if(arr[in-1]>arr[in+1])
        {
            p.second=4;
        }
        return p;
    }

};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        pair<long long, int> pair = ob.maxNtype(arr, n);
        cout<<pair.first<<" "<<pair.second<<"\n";
    }
	return 0;
}  // } Driver Code Ends
