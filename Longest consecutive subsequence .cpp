//Longest consecutive subsequence 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int> s(arr, arr+N);
      int ans=1, maxx=INT_MIN;
      for(auto it=s.begin();it!=s.end();it++)
      {
          if(s.find((*it)+1)!=s.end())
          {
              ans++;
          }
          else
          {
              ans=1;
          }
          maxx=max(maxx, ans);
      }
      return maxx;
      /*
      sort(arr, arr+N);
      int s=1, maxx=INT_MIN;
      for(int i=1;i<N;i++)
      {
        if(arr[i]==(arr[i-1]+1))
        {
            s++;
          maxx=max(maxx, s);
        }
        else
            s=1;
        maxx=max(maxx, s);
      }
      return maxx;
      */
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
