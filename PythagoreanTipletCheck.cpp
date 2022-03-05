/*Pythagorean Triplet
Expected Time Complexity: O(max(Arr[i])2)
Expected Auxiliary Space: O(max(Arr[i]))
Constraints:
1 <= N <= 10^7
1 <= Arr[i] <= 1000
*/
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int a[], int n) {
	    // code here
	    sort(a, a+n);
	    for(int i=n-1;i>=0;i--)
	    {
	        int l=0;
	        int h=i-1;
	        while(l<h)
	        {
	            if((a[l]*a[l]+a[h]*a[h])==a[i]*a[i])
	                return true;
	            else if((a[l]*a[l]+a[h]*a[h])>a[i]*a[i])
	                h--;
	            else
	                l++;
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends
