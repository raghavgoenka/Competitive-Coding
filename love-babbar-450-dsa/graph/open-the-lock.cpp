//https://leetcode.com/problems/open-the-lock/submissions/

class Solution {
public:
     map<string,int>mp,vis,dis;
     queue<string>q;
    void check(string temp,string a)
    {
        if(vis[temp]==0&&mp[temp]==0)
        {
            q.push(temp);vis[temp]=1;
            dis[temp]=dis[a]+1;
        }
    }
    int openLock(vector<string>& deadends, string target) {
      for(int i=0;i<deadends.size();i++)
        {
            mp[deadends[i]]++;
        }
        if(mp["0000"]==1){return -1;}
        vis["0000"]=1;
        q.push("0000");
        dis["0000"]=0;
       
       
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
            string temp=q.front();q.pop();
            string a=temp;
            if(temp==target){ return dis[target];}
            if(mp[temp]==1){continue;}  //deadend
           
            for(int j=0;j<4;j++)
            {
                char res=temp[j];
                if(res=='0')
                {   temp[j]='9';check(temp,a);
                    temp[j]='1';check(temp,a);
                    
                }
                else if(res=='9')
                { temp[j]='8';check(temp,a);
                    temp[j]='0';check(temp,a);
                   
                }
                else
                {   
                    temp[j]=res-1; check(temp,a);
                    temp[j]=res+1;check(temp,a);
                }
                temp[j]=res; //reinitializing
            }
                
           }

        }
        return -1;
        
    }
};