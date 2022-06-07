Count the number of possible triangles


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr, arr + n);
        /*
        int ans = 0;
        for(int i = 0; i < n; i++){
            //int k = i + 2;
            for(int j = i + 1; j < n - 1; j++){
                int k=j+1;
                while(k < n && arr[k] < arr[i] + arr[j]){
                    k++;
                }
                ans += k - j - 1;
            }
        }
        return ans;
        */
         int count = 0;
       
       for(int i = n- 1; i >= 0; i--){
           
           int l = 0;
           int r = i - 1;
           
           while(l < r){
               if(arr[l] + arr[r] > arr[i]){
                   count += (r - l);
                   r--;
               }
               else{
                   l++;
               }
           }
       }
       return count;
       
    }
};


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends
