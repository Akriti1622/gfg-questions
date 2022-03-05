//Find triplets with zero sum
/*Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)
Constrains:-
1 <= n <= 104
-106 <= Ai <= 106 */
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int a[], int n)
    { 
        //Your code here
        sort(a,a+n);
       for(int i=0;i<n-2;i++)
       {
           int l=i+1;
           int h=n-1;
           while(l<h)
           {
               if(a[i]+a[l]+a[h]==0)
               return true;
               else if((a[i]+a[l]+a[h])>0)
               h--;
               else
               l++;
           }
       }
       return false;
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
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends
