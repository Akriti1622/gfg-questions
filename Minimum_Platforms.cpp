//Minimum Platforms
/*
Expected Time Complexity: O(nLogn)
Expected Auxiliary Space: O(n)


Constraints:
1 ≤ n ≤ 50000
0000 ≤ A[i] ≤ D[i] ≤ 2359
*/
// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int i=0, j=0, num=0, m=0;
    	//num->number of trains at current time
    	//m-> maximum number of trains at a time
    	while(i<n&&j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        num++;
    	        m=max(m, num);
    	        i++;
    	    }
    	    else if(arr[i]>dep[j])
    	    {
    	        num--;
    	        m=max(m, num);
    	        j++;
    	    }
    	}
    	while(i<n)
    	{
    	    num++;
    	    m=max(m, num);
    	    i++;
    	}
    	while(j<n)
    	{
    	    num--;
    	    m=max(m, num);
    	    j++;
    	}
    	return m;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
