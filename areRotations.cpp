//Check if strings are rotations of each other or not
//Expected Time Complexity: O(N)
//Expected Space Complexity: O(N)
//N = |s1|.
//1 <= |s1|, |s2| <= 107
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        int n=s1.size();
        int o=s2.size();
        if(n!=o)
            return false;
        string s="";
        s+=(s1+s1);
        int m=s.size();
        int i=0;
        while(i<m)
        {
            int temp=i;
            int j=0;
            if(s[temp]==s2[j])
            {
                while(j<o&&s[temp]==s2[j])
                {
                    temp++;
                    j++;
                }
                if(j==o)
                {
                    return true;
                }
            }
            i++;
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends
