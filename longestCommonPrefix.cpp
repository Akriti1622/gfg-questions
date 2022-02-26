// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
    string longestCommonPrefix (string arr[], int N)
    {
        if(N==1)
            return arr[0];
        int min_length=arr[0].size();
        for(int i=1;i<N;i++)
        {
            int curr_length=arr[i].size();
            min_length=min(min_length, curr_length);
        }
        string common="";
        for(int i=0;i<min_length;i++)
        {
            common+=arr[0][i];
        }
        for(int i=1;i<N;i++)
        {
            //int curr_common="";
            for(int j=0;j<min_length;j++)
            {
                //curr_common+=arr[i][j];
                if(common[j]!=arr[i][j])
                {
                    min_length=min(min_length,j);
                    //break;
                }
            }
        }
        if(min_length==0)
        {
            string s="-1";
            return s;
        }
        string res="";
        for(int i=0;i<min_length;i++)
            res+=common[i];
        return res;
        // your code here
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
