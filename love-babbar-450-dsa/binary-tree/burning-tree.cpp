//https://practice.geeksforgeeks.org/problems/burning-tree/1#
class Solution {
  public:
  Node* taraddr;
   void findNode(Node* root,int target)
   {
        if(root==NULL){return;}
        
        if(root->data==target){taraddr=root;return;}  // finding target node address
        
        findNode(root->left,target);
        findNode(root->right,target);
   }
    void getParent(Node*root,map<Node*,Node*>&par)
    {
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
                par[temp->left]=temp;
            }
            if(temp->right)
            {
                q.push(temp->right);
                par[temp->right]=temp;
            }
        }
    }
    int minTime(Node* root, int target) 
    {
         map<Node*,Node*>par;
        getParent(root,par);
        
        map<Node*,bool>vis;
         queue<Node*>q;
         findNode(root,target); //find target node address;
        int res=0;
        q.push(taraddr);
        vis[taraddr]=true;
        
        while(!q.empty())
        {
            res++;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                Node* temp=q.front();
                q.pop();
                if(temp->left&&vis[temp->left]==false){
                    q.push(temp->left);
                    vis[temp->left]=true;
                }
                if(temp->right&&vis[temp->right]==false){
                    q.push(temp->right);
                    vis[temp->right]=true;
                }
                if(par[temp]&&vis[par[temp]]==false){
                    q.push(par[temp]);
                    vis[par[temp]]=true;
                }
                
            }
        }
        
        return res-1;
    }
};