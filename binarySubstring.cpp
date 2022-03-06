/*Binary String
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ |S| ≤ 104
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ |S| ≤ 104

    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        long c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
                c++;
        }
        long ans=c*(c-1)/2;
        return ans;
    }

};

// { Driver Code Starts.

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}
  // } Driver Code Ends
