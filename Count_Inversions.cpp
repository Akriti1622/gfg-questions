/*
Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 5*10^5
1 ≤ arr[i] ≤ 10^18
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int count_merge(long long arr[],long long temp[],long long l,long long m, long long r)
    {
        long long n1=m+1-l;
        long long n2=r-m;
        long long res=0;
        long long i=l, j=m+1, k=l;
        while(i<=m&&j<=r)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];
            }
            else
            {
                temp[k++]=arr[j++];
                res+=(m+1-i);
            }
        }
        while(i<=m)
        temp[k++]=arr[i++];
        while(j<=r)
        temp[k++]=arr[j++];
        for(long long i=l;i<=r;i++)
        arr[i]=temp[i];
        return res;
    }
    long long int count(long long arr[], long long temp[], long long l, long long r)
    {
        long long res=0;
        if(l<r)
        {
            long long m=l+(r-l)/2;
            res+=count(arr, temp, l, m);
            res+=count(arr, temp, m+1 ,r);
            res+=count_merge(arr, temp, l, m, r);
        }
        return res;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long temp[N];
        return count(arr, temp, 0, N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
