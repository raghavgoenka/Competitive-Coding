//https://practice.geeksforgeeks.org/problems/reorder-list/1
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
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

void reorderList(struct Node* head);

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}
// } Driver Code Ends


/* Following is the Linked list node structure */

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
Node* middle(Node* head)
    {
    Node *slow=head,*fast=head;
        while( fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==NULL){return slow;}
        
        return slow->next;
    }
    Node* reverse(Node* head)
    {
    Node *curr=head,*prev=NULL,*next=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        
        return prev;
    }
    void reorderList(Node* head) {
    Node* temp=head;
    Node* mid=middle(head);
    Node*rev=reverse(mid);
    Node* prev=head,*next=rev,*prev1=rev;
    Node* a=mid,*b=rev;
       
        while(temp!=mid&&next!=NULL)
        {
            prev=temp->next;
            temp->next=next;
            prev1=next->next;
            next->next=prev;
            temp=prev;
            next=prev1;
            
        }
        temp->next=NULL;
        
    }
    
   

    
    
    
    
    


