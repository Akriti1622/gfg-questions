//Three way partitioning
/*
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 10^6
1 <= A[i] <= 10^6
*/
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    int partition(vector<int>& array, int l, int h, int a, int b)
    {
        int i=l-1, j=h+1;
        while(true)
        {
            do{
                i++;
            }while(array[i]<a);
            do{
                j--;
            }while(array[j]>b);
            if(i>=j)
            return j;
            swap(array[i], array[j]);
            
        }
        
    }
    void Lpar(vector<int>& array, int l, int h, int a, int b)
    {
        int i=l-1, j=h+1;
        while(true)
        {
            do{
                i++;
            }while(array[i]<a);
            do{
                j--;
            }while(array[j]>=a&&array[j]<=b);
            if(i>=j)
            return;
            swap(array[i], array[j]);
            
        }
        
    }
    void Rpar(vector<int>& array, int l, int h, int a, int b)
    {
        int i=l-1, j=h+1;
        while(true)
        {
            do{
                i++;
            }while(array[i]>=a&&array[i]<=b);
            do{
                j--;
            }while(array[j]>b);
            if(i>=j)
            return;
            swap(array[i], array[j]);
            
        }
        
    }
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int n=array.size();
        int j=partition(array, 0, n-1, a, b);
        Lpar(array, 0, j, a, b);
        Rpar(array, j+1, n-1, a, b);
        return;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        
        vector<int> array(N);
        unordered_map<int,int> ump;
        
        for(int i=0;i<N;i++){
            cin>>array[i];
            ump[array[i]]++;
        }
        
        int a,b;
        cin>>a>>b;
        
        vector<int> original = array;

        int k1=0,k2=0,k3=0;
        int kk1=0;int kk2=0;int kk3=0;
        
        for(int i=0; i<N; i++)
        {
            if(original[i]>b)
                k3++;
            else if(original[i]<=b and original[i]>=a)
                k2++;
            else if(original[i]<b)
                k1++;
        }
        
        Solution ob;
        ob.threeWayPartition(array,a,b);
      
        for(int i=0;i<k1;i++)
        {
            if(array[i]<b)
            kk1++;
        }
        
        for(int i=k1;i<k1+k2;i++)
        {
            if(array[i]<=b and array[i]>=a)
            kk2++;
            
        }
        
        for(int i=k1+k2;i<k1+k2+k3;i++)
        {
            if(array[i]>b)
            kk3++;
        }
        bool ok = 0;
        if(k1==kk1 and k2 ==kk2 and k3 == kk3)
            ok = 1;
        
        for(int i=0;i<array.size();i++)
            ump[array[i]]--;
        
        for(int i=0;i<array.size();i++)
            if(ump[array[i]]!=0)
                ok=0;
        
        if(ok)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        
    }
    
    return 0;
}
  // } Driver Code Ends
