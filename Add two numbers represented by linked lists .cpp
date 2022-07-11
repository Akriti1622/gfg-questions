//Add two numbers represented by linked lists 

// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        string f="";
        for(Node *curr=first;curr!=NULL;curr=curr->next)
        {
            f+=(curr->data);
        }
        string s="";
        for(Node *curr=second;curr!=NULL;curr=curr->next)
        {
            s+=(curr->data);
        }
        int carry=0;
        int n=f.length(), m=s.length();
         int i=n-1, j=m-1;
         Node *ans=NULL;
        while(i>=0&&j>=0)
        {
            int ld=f[i]+s[j]+carry;
            carry=ld/10;
            ld=ld%10;
            Node *t=new Node(ld);
            t->next=ans;
            ans=t;
            i--;
            j--;
        }
        while(i>=0)
        {
            int ld=f[i]+carry;
            carry=ld/10;
            ld=ld%10;
            Node *t=new Node(ld);
            t->next=ans;
            ans=t;
            i--;
        }
        while(j>=0)
        {
            int ld=s[j]+carry;
            carry=ld/10;
            ld=ld%10;
            Node *t=new Node(ld);
            t->next=ans;
            ans=t;
            j--;
        }
        if(carry>0)
        {
            Node *t=new Node(carry);
            t->next=ans;
            ans=t;
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
