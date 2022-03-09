//https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1/?page=1&company[]=Amazon&category[]=Linked%20List&sortBy=submissions
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        int n=0;
        
        if(head==NULL||k==0||head->next==NULL){return head;}
        Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            n++;
        }
        n++;
        Node* last=temp;
        // k=n-k;
        if(k==n){return head;}
        k=k%n;
        // k=n-k;
       
        
        temp=head;
        Node* first=NULL; 

        
        while(temp!=NULL&&k>0)
        {
            first=temp;
            temp=temp->next;
            k--;
            
        }
        
        first->next=NULL;
        last->next=head;
        head=temp;
        return head;
    }
};
    