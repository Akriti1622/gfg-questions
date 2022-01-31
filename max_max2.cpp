//Maximum and second maximum in an array
//Time Complexity = O(n)
//Auxiliary Space = O(1)
#include<bits/stdc++.h>
using namespace std;
vector<int> max_max2( int arr[], int sizeOfArray){
        int max = INT_MIN, max2= INT_MIN;
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         for(int i=0;i<sizeOfArray;i++)
         {
             if(arr[i]>max)
             {
                max2=max;
                max=arr[i];
             }
            else if((arr[i]<max)&&(arr[i]>max2))
                max2=arr[i];
         }
         if(max2==INT_MIN)
            max2=-1;
        vector<int> v;
        v.push_back(max);
        v.push_back(max2);
        return v;
    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> ans=max_max2(arr, n);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
