//https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1
class Solution
{
public:
    void findMaxSum(Node* root,int len,int&maxlen,int sum,int&maxsum)
    {
        if(root==NULL)
        {
            if(len>=maxlen){maxlen=max(len,maxlen);maxsum=max(sum,maxsum);}
            return ;
        }
        sum+=root->data;
        findMaxSum(root->left,len+1,maxlen,sum,maxsum);
        findMaxSum(root->right,len+1,maxlen,sum,maxsum);
        
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int len=0,maxlen=0,sum=0,maxsum=0;
        findMaxSum(root,len,maxlen,sum,maxsum);
        return maxsum;
    }
};