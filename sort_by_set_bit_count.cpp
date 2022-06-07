//Sort by Set Bit Count


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
class Comparator{
       private:
       int setBits(int n){
       int count=0;
       while(n!=0){
           count++;
           n=n & (n-1);
       }
       return count;
       }
       public:
       int operator()(int x,int y){
           int a=setBits(x);
           int b=setBits(y);
           return a>b;
       }
   };
   public:
   void sortBySetBitCount(int arr[], int n)
   {
       stable_sort(arr,arr+n,Comparator());
   }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
