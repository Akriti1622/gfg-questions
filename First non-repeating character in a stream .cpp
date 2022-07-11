//First non-repeating character in a stream 

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char> q;
		    vector<int> m(26, 0); //its given that there are only small characters  //we can also use hash table 
		    q.push(A[0]);
		    m[A[0]-'a']++;
		    string ans="";
		    ans+=A[0];
		    int i=1;
		    int n=A.length();
		    while(i<n)
		    {
		        m[A[i]-'a']++;
		        q.push(A[i]);
		        while(!q.empty()&&m[q.front()-'a']>1)
		        {
		            q.pop();
		        }
		        if(!q.empty()&&m[q.front()-'a']==1)
		        {
		            ans+=q.front();
		        }
		        else if(q.empty())
		            ans+='#';
		        i++;
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
