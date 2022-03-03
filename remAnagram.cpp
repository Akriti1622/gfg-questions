//Anagram of String
//Expected Time Complexity: O(max(|S1|, |S2|)), where |S| = length of string S.
//Expected Auxiliary Space: O(26)
//Constraints:- 1 <= |S1|, |S2| <= 105
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
int a=str1.size();
int b=str2.size();
int alp1[26]={0};
int alp2[26]={0};
    for(int i=0;i<a;i++)
    {
        int n=(int)str1[i]-97;
        alp1[n]++;
    }
for(int i=0;i<b;i++)
    {
        int n=(int)str2[i]-97;
        alp2[n]++;
    }
    int c=0;
for(int i=0;i<26;i++)
{
    while(alp1[i]>0&&alp2[i]>0)
    {
        c++;
        alp1[i]--;
        alp2[i]--;
    }
}
int res=a+b;
res-=(2*c);
return res;
}
