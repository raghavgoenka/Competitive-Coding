//https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1#
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
      Node* reverse(struct Node *head)
   {
       Node* dummy=NULL;
       while(head!=NULL)
       {
           Node *next=head->next;
           head->next=dummy;
           dummy=head;
           head=next;
       }
       return dummy;
   }

    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* t1=reverse(first);
        Node* t2=reverse(second);
        Node* dummy=new Node(0);
        Node* res=dummy;
        
        int sum=0,carry=0;
        
        while(t1!=NULL||t2!=NULL||carry!=0)
        {
            if(t1!=NULL)
            {
                sum+=t1->data;
                t1=t1->next;
            }
            if(t2!=NULL)
            {
                sum+=t2->data;
                t2=t2->next;
            }
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            Node* n=new Node(sum);
            res->next=n;
            res=res->next;
            sum=0;
            
        }
        return reverse(dummy->next);
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