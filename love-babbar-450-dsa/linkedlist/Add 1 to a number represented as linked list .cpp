//https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1#
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node *reverse(Node *head)
    {
        Node* temp=head,*prev=NULL,*curr=NULL;
        
        while(temp!=NULL)
        {
            curr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
         Node* temp=NULL;
        temp=reverse(head);
        Node *res=temp;
        int carry=0;
      if(temp->data<9){temp->data=temp->data+1;
          
          return reverse(temp);
      }
      else{
          Node* prev=NULL;
          temp->data=0;
          carry=1;
          prev=temp;
          temp=temp->next;
          
          while(temp!=NULL)
          {
              if(temp->data>8){temp->data=0;carry=1;}
              else{temp->data=temp->data+1;carry=0; return reverse(res);}
              prev=temp;
              temp=temp->next;
          }
         
          if(carry==1){
              Node *nn=new Node(1);
              prev->next=nn;
          }
      }
      
      
      return reverse(res); 
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends