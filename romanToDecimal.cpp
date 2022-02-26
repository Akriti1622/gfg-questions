// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
    //int romanToDecimal(string &str) {
        // code here
    int value(char r)
    {
   if (r == 'I')
       return 1;
   if (r == 'V')
       return 5;
   if (r == 'X')
       return 10;
   if (r == 'L')
       return 50;
   if (r == 'C')
       return 100;
   if (r == 'D')
       return 500;
   if (r == 'M')
       return 1000;
}
   int romanToDecimal(string &s) {
       // code here
       int n=s.length();
       int ans=0;
       if(n==1)ans=value(s[0]);
       else{
           for(int i=0;i<n-1;i++){
               if(value(s[i])>=value(s[i+1]))ans=ans+value(s[i]);
               else ans=ans-value(s[i]);
           }
           ans=ans+value(s[n-1]);
       }
       return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends
/*Input:-
1
VII
Output:-
7*/
