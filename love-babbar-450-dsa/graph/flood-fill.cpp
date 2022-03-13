//https://leetcode.com/problems/flood-fill/submissions/
class Solution {
public:
      vector<vector<int>> newImage;
    vector<vector<int>> visited;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> visited_temp(image.size() , vector<int> (image[0].size(), 0));
        visited=visited_temp;
        int startColor= image[sr][sc];
       
        newImage= image;
        flood(sr, sc, newColor, startColor);
        return newImage;
    }
    
    void flood(int sr, int sc, int newColor, int startColor){
        newImage[sr][sc]=newColor;
        visited[sr][sc]=1;
        
        if((sr+1)<newImage.size() && newImage[sr+1][sc] == startColor && visited[sr+1][sc]==0){
            flood(sr+1, sc, newColor, startColor);
        }
        if((sr-1)>=0 && newImage[sr-1][sc] == startColor && visited[sr-1][sc]==0){
             flood(sr-1, sc, newColor, startColor);
        }
         if((sc+1)<newImage[0].size() && newImage[sr][sc+1] == startColor && visited[sr][sc+1]==0){
            flood(sr, sc+1, newColor, startColor);
        }
        if((sc-1)>=0 && newImage[sr][sc-1] == startColor && visited[sr][sc-1]==0){
             flood(sr, sc-1, newColor, startColor);
        }
        
    }
};