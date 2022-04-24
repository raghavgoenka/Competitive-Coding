//https://practice.geeksforgeeks.org/problems/sorted-list-to-bst/1/#
class Solution{
  public:
    TNode* sortedListToBST(LNode *head) {
        //code here
        if(head==NULL){return NULL;}
        if(head->next==NULL){return new TNode(head->data);}
        
        LNode* slow=head,*fast=head->next->next;
        while(fast!=NULL&&fast->next!=NULL){slow=slow->next;fast=fast->next->next;}
        
        LNode* cur=slow->next;
        slow->next=NULL;
        TNode*root=new TNode(cur->data);
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(cur->next);
        
        return root;
        
        
    }
};