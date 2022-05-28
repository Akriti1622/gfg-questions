//Minimum Swaps to Sort
/*
Expected Time Complexity: O(nlogn)
Expected Auxiliary Space: O(n)

Constraints:
1 ≤ n ≤ 105
1 ≤ numsi ≤ 106
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int ans=0 ;
	    int n=nums.size() ;
	    vector<pair<int,int>> p ;
	    for(int i=0 ; i<n ; i++)
	        p.push_back({nums[i],i}) ;
	    sort(p.begin(),p.end()) ;
	    for(int i=0 ; i<n ; i++)
	    {
	        if(p[i].second==i) continue ;
	        else{
	            ans++ ;
	            swap(p[i],p[p[i].second]) ;
	            i-- ;
	        }
	    }  
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
