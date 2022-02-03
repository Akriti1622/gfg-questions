//Reverse array in groups
//Time Complexity :- O(n)
//Auxiliary Space :- O(n)
#include<bits/stdc++.h>
using namespace std;
void reverseArr(vector<long long > &arr, int start,int end){
       while(start<=end){
           swap(arr[start],arr[end]);
           start++;
           end--;
       }
   }
   void reverseInGroups(vector<long long>& arr, int n, int k){
       // code here
       
       for(int i=0;i<n;i+=k){
           if(i+k-1>=n){
               // cout<<i<<" "<<i+k-1<<endl;
               reverseArr(arr,i,n-1);
           
           }
           else{
                   //   cout<<i<<" "<<i+k-1<<endl;
               reverseArr(arr,i,i+k-1);
           }
           
       }
   }
   int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long> arr;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        arr.push_back(x);
    }
    reverseInGroups(arr, n, k);
    for(long long i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
