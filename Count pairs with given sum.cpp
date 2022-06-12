//Count pairs with given sum 

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int , int> m;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        int ans=0;
        for(auto x:m)
        {
            if(m.find(k-x.first)!=m.end()&&(k!=2*x.first))
            {
                ans+=(x.second*(m[k-x.first]));
                m.erase(k-x.first);
            }
            else if(k==2*x.first)
            {
                ans+=(x.second*(x.second-1)/2);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends
