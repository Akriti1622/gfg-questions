//Maximum occurred integer
/*
Expected Time Complexity: O(n+maxx).
Expected Auxiliary Space: O(maxx).
maxx is maximum element in R[]

Constraints:
1 ≤ n ≤ 106
0 ≤ L[i], R[i] ≤ 106
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
class Solution{Maximum occured integer
/*
Expected Time Complexity: O(n+maxx).
Expected Auxiliary Space: O(maxx).
-maxx is maximum element in R[]


Constraints:
1 ≤ n ≤ 106
0 ≤ L[i], R[i] ≤ 106
*/
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        int hash[maxx+1];
        fill(hash,hash+maxx+1,0);
        for(int i=0;i<n;i++){
            for(int j=L[i];j<=R[i];j++){
                hash[j]++;
            }
        }
        int res=-1, m=0;
        for(int i=0;i<maxx+1;i++)
        {
            if(hash[i]>m)
            {
                m=hash[i];
                res=i;
            }
        }
        return res;
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n;
	    
	    //taking size of array
	    cin >> n;
	    int L[n];
	    int R[n];
	    
	    //adding elements to array L
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    
	    //adding elements to array R
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    Solution ob;
	    
	    //calling maxOccured() function
	    cout << ob.maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
