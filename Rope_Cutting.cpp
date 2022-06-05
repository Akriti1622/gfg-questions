//Rope Cutting

// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
        vector<int> v;
        if(n==1||n==0)
        {
            int x=0;
            v.push_back(x);
            return v;
        }
        sort(arr, arr+n);
        int num=n;              //num  -> no. of elements earlier
        
        int before=arr[0];      //before  -> before element
        for(int i=1;i<n;i++)
        {
            int count=1;
            while(arr[i]==before)
            {
                count++;
                i++;
            }
            num=num-count;
            if(num!=0)
            {
                v.push_back(num);
            }
            before=arr[i];
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}  // } Driver Code Ends
