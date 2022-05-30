//Triplet Sum in Array
/*
Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ n ≤ 103
1 ≤ A[i] ≤ 105
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        int l=0, h=n-1;
        while(l<h)
        {
            int m=l+1;
            h=n-1;
            while(m<h)
            {
                if(A[l]+A[m]+A[h]>X)
                {
                    h--;
                }
                else if(A[l]+A[m]+A[h]<X)
                {
                    m++;
                }
                else if(A[l]+A[m]+A[h]==X)
                {
                    return true;
                }
            }
            l++;
        }
        return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
