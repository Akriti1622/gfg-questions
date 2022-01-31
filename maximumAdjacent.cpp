//Strongest Neighbour (Array)
//Time Complexity = O(n)
//Auxiliary Space = O(1)
#include<bits/stdc++.h>
using namespace std;
void maximumAdjacent( int arr[], int sizeOfArray){
    
    /*******************************************
     * Your code here
     * Function should print max adjacents for all pairs
     ********************************************/
     int maxno=0;
     for(int i=0;i<sizeOfArray-1;i++)
     {
         maxno=max(arr[i],arr[i+1]);
         cout<<maxno<<" ";
     }
     return;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    maximumAdjacent(arr, n);
    return 0;
}
