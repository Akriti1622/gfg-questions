/*
Absolute Difference of 1 
Expected Time Complexity:O(n)
Expected Auxiliary Space:O(1)

Constraints:
1 <= n <= 10^7
1 <= k, arr[i] <= 10^18
*/
// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k) {
        // code here
        vector<long long> v;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<k)
            {
                int t=arr[i];
                int ld=t%10;
                t=t/10;
                if(t==0)
                    t=-1;
                while(t>0)
                {
                    
                    if(abs(ld-(t%10))!=1)
                    {
                        break;
                    }
                    else
                    {
                        ld=t%10;
                        t=t/10;
                    }
                }
                if(t==0)
                {
                    v.push_back(arr[i]);
                }
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.getDigitDiff1AndLessK(arr, n, k);
        for (auto x: ans) {
            cout << x << " ";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";

    }
    return 0;
}
  // } Driver Code Ends
