//Factorials of large numbers 

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> rev(vector<int> v)
    {
        int l=0, h=v.size()-1;
        while(l<h)
        {
            swap(v[l], v[h]);
            l++;
            h--;
        }
        return v;
    }
    vector<int> factorial(int N){
        // code here
        vector<int> res;
       int t,size,carry;
       res.push_back(1);
       for(int i=2;i<=N;i++)
       {
            size=res.size();
            carry=0;
           for(int j=size-1;j>=0;j--)
           {
               res[j]=res[j]*i + carry;
               carry= res[j]/10;
               res[j]=res[j]%10;
           }
           while(carry != 0)
           {
               t=carry%10;
               carry=carry/10;
               res.insert(res.begin(),t);
           }
       }
       return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
