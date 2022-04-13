/*Square root of a number
Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ x ≤ 107
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here
        long long int l=1, h=x;
    long long int ans=-1;
    while(l<=h)
    {
        long long int mid=(l+h)/2;
        long long int msq=mid*mid;
        if(msq==x)
            return mid;
        else if(msq>x)
            h=mid-1;
        else
        {
            l=mid+1;
            ans=mid;
        }
    }
    return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends
