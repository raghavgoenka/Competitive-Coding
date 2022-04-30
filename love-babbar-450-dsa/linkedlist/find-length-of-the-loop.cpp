//https://practice.geeksforgeeks.org/problems/find-length-of-loop/1#
int countNodesinLoop(struct Node *head)
{
    // Code here
    int flag =0,c=1;
    Node*slow=head,*fast=head;

    while(fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){flag=1;break;}
    }
    if(flag==0){return 0;}
    slow=slow->next;
    while(slow!=fast){c++;slow=slow->next;}
    return c;
}