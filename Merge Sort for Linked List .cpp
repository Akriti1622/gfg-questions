//Merge Sort for Linked List 

// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node *findMid(Node *&head)
    {
        Node *s=head, *f=head->next;
        while(f!=NULL&&f->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
    Node *merge(Node *left, Node *right)
    {
        Node *dummy=new Node(-1);
        Node *h1=left;
        Node *h2=right;
        Node *res=dummy;
        while(h1!=NULL&&h2!=NULL)
        {
            if(h1->data<=h2->data)
            {
                res->next=h1;
                res=res->next;
                h1=h1->next;
            }
            else
            {
                res->next=h2;
                res=res->next;
                h2=h2->next;
            }
        }
        while(h1!=NULL)
        {
            res->next=h1;
            res=res->next;
            h1=h1->next;
        }
        while(h2!=NULL)
        {
            res->next=h2;
            res=res->next;
            h2=h2->next;
        }
        return dummy->next;
    }
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL||head->next==NULL)
            return head;
            
        Node *mid=findMid(head);
        Node *left=head;
        Node *right=mid->next;
        mid->next=NULL;
        left=mergeSort(left);
        right=mergeSort(right);
        Node *ans=merge(left, right);
        return ans;
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends
