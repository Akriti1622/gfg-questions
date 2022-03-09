//Remove character
/*
Expected Time Complexity:O( |String1| + |String2| )
Expected Auxiliary Space: O(K),Where K = Constant   

Constraints:
1 <= |String1| , |String2| <= 50
*/
// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        int a[26]={0};
        for(int i=0;i<string2.length();i++)
        {
            int x=(int)string2[i]-97;
            a[x]++;
        }
        string s="";
        for(int i=0;i<string1.length();i++)
        {
            int x=(int)string1[i]-97;
            if(a[x]==0)
            {
                s+=string1[i];
            }
        }
        return s;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}
  // } Driver Code Ends
