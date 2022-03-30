//https://leetcode.com/problems/cheapest-flights-within-k-stops/submissions/

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> q;  
        vector<vector<int>> arr[n];   
        for(auto f:flights){
            arr[f[0]].push_back({f[1],f[2]});
        }
        q.push({0,src,0});                       
        int breaks[n];                           
        memset(breaks,102,sizeof(breaks));       
        while(!q.empty()){
            vector<int> v = q.top();
            int cost = v[0],node = v[1],stop = v[2];
            q.pop();
            if(node==dst)  return cost;
            
            if(stop<breaks[node] && stop<=k){ 
                breaks[node]=stop;
                for(auto x:arr[node]){
                     q.push({cost+x[1],x[0],stop+1});
                } 
            }
        }
        return -1;
    }
};