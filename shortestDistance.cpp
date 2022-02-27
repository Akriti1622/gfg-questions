//Expected Time Complexity: O(|S|)
//Expected Auxiliary Space: O(1)
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
		int n=s.size();
		int st=0, en=0;
		int flag1=0, flag2=0;
		int diff=INT_MAX;
		for(int i=0;i<n;i++)
		{
		    if(s[i]==word1)
		    {
		        st=i;
		        flag1=1;
		    }
		    if(s[i]==word2)
		    {
		        en=i;
		        flag2=1;
		    }
		    if(flag1==1&&flag2==1)
		    {
		        if(abs(st-en)<diff)
		        {
		            diff=abs(st-en);
		        }
		    }
		}
		return diff;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
/*Input:-
1
6
vml uds aih du vml uds
vml
uds
Output:-
1
*/
