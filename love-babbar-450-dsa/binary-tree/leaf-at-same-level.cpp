//https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1

class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        queue<Node*>q;
        q.push(root);
        int level=-1,c=0;
        while(!q.empty())
        {
            c++;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                Node* temp=q.front();
                q.pop();
                if(temp->left){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
                
                if(temp->left==NULL&&temp->right==NULL)
                {
                    if(level==-1){level=c;}
                    else if(level!=-1&&c!=level){return false;}
                }
            }
        }
        return true;
    }
};