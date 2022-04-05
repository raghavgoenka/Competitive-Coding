
//https://practice.geeksforgeeks.org/problems/swap-kth-node-from-beginning-and-kth-node-from-end-in-a-singly-linked-list/1
   Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    if(K>num)return head;
    Node *left,*right,*trav = head,*leftprev=NULL,*rightprev=NULL;
    int i=0;
    while(++i<K && trav){
        leftprev = trav;
        trav = trav->next;
    }
    left = trav;
    i=0;
    trav = head;
    while(++i<=(num-K) && trav){ 
        rightprev = trav;
        trav = trav->next;
    }
    right = trav;
    if(!leftprev)head=right;
    else leftprev->next = right;
    if(!rightprev)head = left;
    else rightprev->next = left;
    swap(right->next,left->next);
    return head;
   
}

//leetcode when length of linked list is not given;
//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
    ListNode *left,*right,*trav = head,*leftprev=NULL,*rightprev=NULL;
    int i=0;
    while(++i<k && trav!=NULL){
        leftprev = trav;
        trav = trav->next;}
     if(i<k){return head;}
    left = trav;
    
    i=0;
    rightprev=left;
    trav=head;
     ListNode* t=NULL;
        
    while(rightprev->next!=NULL){ 
       
        t=trav;
        rightprev=rightprev->next;
        trav=trav->next;
      }
    right=trav;
        rightprev=t;
//         cout<<leftprev->val<<" "<<left->val<<" ";
// cout<<rightprev->val<<" "<<right->val<<" ";
       
    if(!leftprev)head=right;
    else leftprev->next = right;
    if(!rightprev)head = left;
    else rightprev->next = left;
    swap(right->next,left->next);
    return head;
    }
};







