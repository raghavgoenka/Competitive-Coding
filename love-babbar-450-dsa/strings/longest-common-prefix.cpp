//https://practice.geeksforgeeks.org/problems/cf0cd86c66d07222499f84ec22dbcf6cae30e848/1#

class Solution{
public:
static bool cmp(string&a,string&b)
{
    return a.size()<b.size();
}
    string LCP(string arr[], int n)
    {
        // code here
        sort(arr,arr+n,cmp);
        string res="",temp=arr[0];
        for(int i=0;i<temp.size();i++)
        {
            for(int j=1;j<n;j++)
            {
                if(temp[i]==arr[j][i]){continue;}
                else{return res.size()>0?res:"-1";}
            }
            res+=temp[i];
        }
        return res.size()>0?res:"-1";
    }
};