// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        int num[13] = {1000,900,500,400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        // code here
        string s="";
        if(n>3999)
            n=n%4000;
        while(n>0)
        {
            for(int i=0;i<13;i++)
            {
                while(n>=num[i])
                {
                    s+=romans[i];
                    n-=num[i];
                }
            }
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}  // } Driver Code Ends
/*Input:-
1
5
Output:-
V
*/
