//https://practice.geeksforgeeks.org/problems/median-of-bst/1/#


//IN O(N) time n O(1) space complexity using morris traversal 
float  getNodes(Node*root,int&c)
 {  Node*cur=root,*prev=NULL,*prevNode=NULL;
    int p=0;
    int a=(c+1)/2,b=(c/2)+1;
        while(cur!=NULL)
        { 
          
            if(cur->left==NULL){
                p++;
                if((p==a)&&c%2!=0){return cur->data;}
                else if(p==b&&c%2==0){return float(cur->data+prevNode->data)/float(2.0);}
                prevNode=cur;
                 cur=cur->right;                   
            }
            else if(cur->left!=NULL)
            {
                prev=cur->left;
                while(prev->right!=NULL&&prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                     prev->right=cur;
                    cur=cur->left;
                }
                else{
                    prev->right=NULL;
                    prevNode=prev;
                    p++;
                     if(p==a&&c%2!=0){return cur->data;}
                 else if(p==b&&c%2==0){return float(cur->data+prevNode->data)/float(2.0);}
                 prevNode=cur;
                    cur=cur->right;
                }
            }
      }
      
     
     
 }
 void  countNodes(Node*root,int&c)
 {  Node*cur=root,*prev=NULL;
    
        while(cur!=NULL)
        { 
          
            if(cur->left==NULL){
                c++;
                 cur=cur->right;                   
            }
            else if(cur->left!=NULL)
            {
                prev=cur->left;
                while(prev->right!=NULL&&prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                     prev->right=cur;
                    cur=cur->left;
                }
                else{
                    prev->right=NULL;
                    c++;
                    cur=cur->right;
                }
            }
      }
      
     
     
 }
float findMedian(struct Node *root)
{     int c=0;
      countNodes(root,c);
     
      float res=getNodes(root,c);
    return res;
      
   
}
