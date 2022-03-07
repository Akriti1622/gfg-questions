/*  Remove common characters and concatenate
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |Length of Strings|

Constraints: 
1 <= |Length of Strings| <= 104
*/
// { Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string s="";
        int a[26]={0};
        int b[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int x=(int)s1[i]-97;
            a[x]=1;
        }
        for(int i=0;i<s2.length();i++)
        {
            int x=(int)s2[i]-97;
            b[x]=1;
        }
        for(int i=0;i<s1.length();i++)
        {
            int x=(int)s1[i]-97;
            if(a[x]==1&&b[x]==0)
            {
                s+=s1[i];
            }
        }
        for(int i=0;i<s2.length();i++)
        {
            int x=(int)s2[i]-97;
            if(b[x]==1&&a[x]==0)
            {
                s+=s2[i];
            }
        }
        if(s=="")
        {
            string t="-1";
            return t;
        }
        return s;
    }

};

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}
  // } Driver Code Ends
