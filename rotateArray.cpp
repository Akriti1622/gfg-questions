//Rotate the array to the left (counter-clockwise direction) by D steps
//Time Complexity :- O(n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int low, int high)
    {
        while(low<high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int n, int d)
    {
        // code here
        reverse(arr, 0, d-1);
        reverse(arr, d, n-1);
        reverse(arr, 0, n-1);
    }
   int main()
{
    int n,d;
    cin>>n>>d;
    if(d>=n)
        d=d%n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotateArr(arr, n, d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
