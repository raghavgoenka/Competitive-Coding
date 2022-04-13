//https://practice.geeksforgeeks.org/problems/children-sum-parent/1/#

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
     queue<Node*>q;
     q.push(root);
       while(!q.empty())
       {
           int z=q.size();
           for(int i=0;i<z;i++)
           {
               Node* temp=q.front();
               q.pop();
               int a=0,b=0;
               if(temp->left){a+=temp->left->data;q.push(temp->left);}
               if(temp->right){b+=temp->right->data;q.push(temp->right);}
             
               if(a==0&&b==0){continue;}
               if(temp->data!=(a+b)){return 0;}
           }
           
       }
       return 1;
    }
};