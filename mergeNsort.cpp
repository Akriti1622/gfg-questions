//merge and sort
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
    // Write your code here

class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[])
    {
        // Write your code here
        
        bool num[100005];
        for(int i=0;i<100005;i++)
            num[i]=false;
        for(int i=0;i<n;i++)
        {
            num[a[i]]=true;
        }
        for(int i=0;i<m;i++)
        {
            num[b[i]]=true;
        }
        int index=0;
        for(int i=0;i<100005;i++)
        {
            if(num[i])
            {
                answer[index]=i;
                index++;
            }
        }
        return index;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m+5];
        for(int j=0;j<m;j++)
            cin>>b[j];
        Solution ob;
        int answer[n+m+5];
        int x=ob.mergeNsort(a, b, n, m, answer);
        
        for(int i=0;i<x;i++)
        cout<<answer[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}  // } Driver Code Ends
