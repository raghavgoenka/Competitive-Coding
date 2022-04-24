//https://practice.geeksforgeeks.org/problems/make-binary-tree/1/#
void convert(Node *head, TreeNode *&root) {
    // Your code here
    queue<TreeNode*>q;
    root=new TreeNode(head->data);
    q.push(root);
    Node* temp=head;
    
    while(temp!=NULL&&(!q.empty()))
    {
        int s=q.size();
        for(int i=0;i<s&&temp!=NULL;i++){
        TreeNode* cur=q.front();
        q.pop();
        if(temp->next!=NULL){temp=temp->next;cur->left=new TreeNode(temp->data);q.push(cur->left);}
        if(temp->next!=NULL){temp=temp->next;cur->right=new TreeNode(temp->data);q.push(cur->right);}
       
        }
    }
    
}