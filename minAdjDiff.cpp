//9. Minimum adjacent difference in a circular array (Array)
//Time Complexity = O(n)
//Auxiliary Space = O(1)
#include<bits/stdc++.h>
using namespace std;
int minAdjDiff(int arr[], int n){    
        int res=abs(arr[0]-arr[n-1]);
        for(int i=0;i<n-1;i++)
        {
            res=min(res,abs(arr[i+1]-arr[i]));
        }
        return res;
    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<minAdjDiff(arr, n);
    return 0;
}
