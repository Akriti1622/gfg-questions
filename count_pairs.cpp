//Count pairs in array divisible by K


// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        //code here
        long long rem[K];
        for(int i=0;i<K;i++)
        {
            rem[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            int r=A[i]%K;
            rem[r]++;
        }
        long long count=0;
        if(rem[0]>1)
        {
            int num=rem[0]-1;
            count+=num*(num+1)/2;
        }
        if(K%2==0)
        {
            int i=1;
            for(i;i<K/2;i++)
            {
                count+=(rem[i]*rem[K-i]);
            }
            int num=rem[i]-1;
            count+=(num*(num+1)/2);
        }
        else
        {
            int i=1;
            for(i;i<=K/2;i++)
            {
                count+=(rem[i]*rem[K-i]);
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends
