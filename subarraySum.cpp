//Subarray with given sum
/*
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= Ai <= 109
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> v;
        v.push_back(1);
        v.push_back(-1);
        int sum=0;
        for(int i=0;i<n;i++)
        {
           // v[0]=i+1;
           sum+=arr[i];
            while(sum>s&&i>0)
            {
                sum-=arr[v[0]-1];
                v[0]++;
            }
            if(sum==s)
            {
                v[1]=i+1;
                return v;
            }
        }
        vector<int> v1={-1};
        return v1;
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
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
