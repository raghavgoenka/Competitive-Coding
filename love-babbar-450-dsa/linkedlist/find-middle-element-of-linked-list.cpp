//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/0/
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
         Node *slow=head,*fast=head->next;
        
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
         
        }
      
        if(fast!=NULL){return slow->next->data;}
        
        return slow->data;
    }
};