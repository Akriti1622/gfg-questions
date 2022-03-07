//Sum of numbers in string 
//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(N)
/Constraints:
1 <= length of the string <= 105
Sum of Numbers <= 105
*/

// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
     int sum=0;
    int res=0;
    int i=0;
    while(i<str.length()){
        char ch=str[i];
        if(ch>='0' and ch<='9'){
            sum=(sum*10)+(ch-'0');
        }
        else if(ch>='a' and ch<='z'){
            res+=sum;
            sum=0;
            
        }
        i++;
    }
    res+=sum;
    return res;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
