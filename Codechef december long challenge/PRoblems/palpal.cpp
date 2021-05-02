
// //https://www.codechef.com/LTIME93B/problems/PALPALS
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// typedef long long int ll;

// int main(void)
// {
//     int t;
//     cin>>t;

   
//     while(t--)
//     {
//         string s;cin>>s;
//         int arr[26]={0};
//         if(s.length()==1){cout<<"NO\n";}
//         else{
//         for(int i=0;i<s.length();i++)
//         {arr[s[i]-'a']++;}
//        int even=0,odd=0,one=0;
//         for(int i=0;i<26;i++)
//         {
//             if(arr[i]>0 && (arr[i]%2)==0){even++;}
//              else if(arr[i]>1 && (arr[i]%2)!=0){odd++;}
//              else if(arr[i]==1){one++;}
//         }
//         if(one==0 && (even>0 || odd>0) ){cout<<"YES\n";}
//         else if(even>=one){cout<<"YES\n";}
//        else if(even<one){cout<<"NO\n";}
    
//         }
//     }  

   
// }



//https://www.codechef.com/LTIME93B/problems/PALPALS
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

int main(void)
{
    int t;
    cin>>t;

   
    while(t--)
    {
        string s;cin>>s;
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
        {arr[s[i]-'a']++;}
       int even=0,odd=0;
        for(int i=0;i<26;i++)
        {  
            if(arr[i]%2){odd++;}
            {even+=(arr[i]/2);}
        }
      if(odd<=even){cout<<"YES\n";}
      else{cout<<"NO\n";}
    
        
    }  

   
}

