class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size()-1;
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int temp=arr[j][n-1-i];
                arr[j][n-1-i]=arr[i][j];
                arr[i][j]=arr[n-1-j][i];
                arr[n-1-j][i]=arr[n-1-i][n-1-j];
                arr[n-1-i][n-1-j]=temp;
                
                
            }
        }
    }
};