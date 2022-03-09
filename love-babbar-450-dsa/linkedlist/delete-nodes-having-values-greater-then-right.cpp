//https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1#
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* reverse(Node* head)
    {
        Node *curr=head,*prev=NULL,*next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
    Node *compute(Node *head)
    {
        // your code goes here
        if(head==NULL){return head;}
        
        Node* temp=reverse(head);
        Node* res=temp;
        Node*prev=temp;
        int mx=temp->data;
        temp=temp->next;
        
        while(temp!=NULL)
        {
            if(temp->data<mx){
                prev->next=temp->next;
                
                temp=temp->next;
                
            }
            else{
                mx=max(mx,temp->data);
                prev=temp;
                temp=temp->next;
            }
            // cout<<mx<<endl;
        }
        
        return reverse(res);
        
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends