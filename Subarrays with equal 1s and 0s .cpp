//Subarrays with equal 1s and 0s 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                arr[i]=-1;
        }
        unordered_map<int, int> map;
      int sum = 0, ans = 0;
      map[0] = 1;
      for (int i = 0; i < n; i++) {
          sum += arr[i];
          if (map.count(sum)) {
              ans += map[sum];
          }
          map[sum]++;
      }
      return ans;
      
        /*
        long long int c=0;
        for(int i=0;i<n;i++)
        {
            int zero=0, one=0;
            for(int j=i;j<n;j++)
            {
                if(arr[j]==0)
                    zero++;
                else
                    one++;
                if(zero==one)
                    c++;
            }
        }
        return c;
        */
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends
