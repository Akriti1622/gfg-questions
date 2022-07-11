//Check if Linked List is Palindrome 

// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node *reverse(Node *head)
    {
        Node *prev=NULL;
        Node *next=NULL;
        Node *c=head;
        while(c!=NULL)
        {
            next=c->next;
            c->next=prev;
            prev=c;
            c=next;
        }
        return prev;
    }
    Node *findMid(Node *head)
    {
        Node *s=head;
        Node *f=head->next;
        while(f!=NULL&&f->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head->next==NULL)
            return true;
        Node *mid=findMid(head);
        
        Node *temp=mid->next;
        mid->next=reverse(temp);
        Node *c1=head, *c2=mid->next;
        while(c2!=NULL)
        {
            if(c1->data!=c2->data)
                return false;
            c1=c1->next;
            c2=c2->next;
        }
        temp = mid->next;
        mid->next = reverse(temp);
        return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends
