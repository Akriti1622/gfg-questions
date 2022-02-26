// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string rev(string &S, int i, int j)
    {
        while(i<=j)
        {
            swap(S[i],S[j]);
            i++;
            j--;
        }
        return S;
    }
    string reverseWords(string S) 
    { 
        // code here
        int i=0, j=0;
        int n=S.length();
        for(j=1;j<n;j++)
        {
            if(S[j]=='.')
            {
                rev(S, i, j-1);
                i=j+1;
            }
            if(j==n-1)
                rev(S, i, j);
        }
        rev(S, 0, n-1);
        return S;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
//try input:-
//1
//i.like.this.program.very.much
//o/p:-much.very.program.this.like.i
