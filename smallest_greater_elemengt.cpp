//Smallest greater elements in whole array
/*
Expected Time Complexity: O(N*LOG(N)).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 10^5
-10^6 ≤ Ai ≤ 10^6Expected Time Complexity: O(N*LOG(N)).
Expected Auxiliary Space: O(N).

 

Constraints:
1 ≤ N ≤ 105
-106 ≤ Ai ≤ 106
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends


int upperBound(int arr[], int start, int end, int val)
{
    int N = end;
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] <= val){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
    }
    
    
    if(arr[start] <= val || start < 0 || start >= N)
        return -10000000;
    
    return arr[start];
}
int* greaterElement(int arr[], int n)
{
    // Complete the function
    int *ans=new int[n];
    int temp[n];
    for(int i=0;i<n;i++)
        temp[i]=arr[i];
    sort(temp,temp+n);
    for(int i=0;i<n;i++)
    {
        ans[i]=upperBound(temp, 0, n, arr[i]);
    }
    return ans;
}
