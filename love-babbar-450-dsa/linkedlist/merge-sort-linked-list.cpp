//https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1#
class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
   
Node* merge(Node* head1,Node* head2){
       Node* temp1=head1,*temp2=head2;
       Node* ans=NULL,*temp=nullptr;
       while(temp1 and temp2){
           if(temp1->data <temp2->data){ 
               Node* t=new Node(temp1->data);
               if(!ans){
                   ans=t;
                   temp=t;
               }
               else{
                   temp->next=t;
                   temp=t;
               }
               temp1=temp1->next;
           }
           else{
               Node* t=new Node(temp2->data);
               if(!ans){
                   ans=t;
                   temp=t;
               }
               else{
                   temp->next=t;
                   temp=t;
               }
               temp2=temp2->next;
           }
       }
       while(temp1){
           Node* t=new Node(temp1->data);
           temp->next=t;
           temp=t;
           temp1=temp1->next;
       }
       while(temp2){
           Node* t=new Node(temp2->data);
           temp->next=t;
           temp=t;
           temp2=temp2->next;
       }
       return ans;
   }
   //simple middle function


   Node* middle(Node* head){
       Node* fast=head->next;
       Node* slow=head;
       while(fast and fast->next){
           slow=slow->next;
           fast=fast->next->next;
       }
       return slow;
   }
   
   
   
   //Function to sort the given linked list using Merge Sort.
   Node* mergeSort(Node* head) {
       //base condition
       if(head==nullptr or head->next==nullptr) return head;
       
       Node* mid=middle(head);
       Node* left=head;
       Node* right=mid->next;
       //divide the array by setting mid->next ==nullptr into two part
       //when it hit null it return due to base condition
       mid->next=NULL;
       left=mergeSort(left);
       right=mergeSort(right);
       return merge(left,right);
   }
};
