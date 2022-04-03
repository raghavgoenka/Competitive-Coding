//https://practice.geeksforgeeks.org/problems/move-all-zeros-to-the-front-of-the-linked-list/1#
void moveZeroes(struct Node **head)
{
    //Your code here
    if(*head==NULL){return;}
    Node* temp=*head,*prev=*head;
    
    while(temp!=NULL)
    {
         if(temp==*head){temp=temp->next;continue;}
         
         else if(temp->data==0)
         {
             prev->next=temp->next;
             temp->next=*head;
             *head=temp;
             temp=prev->next;
         }
         else{
             prev=temp;
             temp=temp->next;
         }
         
    }
}
