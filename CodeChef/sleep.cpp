#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int l,h;
        cin>>l>>h;
        string a;
        vector <int> b;
        int c1=0;
        cin>>a;

        for(int i=0;i<l;i++){
            if(a[i]=='0') {
                c1++;
                }
            else if((a[i]=='1') && (c1!=0)) {
                b.push_back(c1);
               
                c1=0;
            }
        }
        if(c1>0){b.push_back(c1);c1=0;}
     
        for(int i=0;i<b.size();i++) {
         
           h=h-b[i];
           if(h<=0){cout<<"YES"<<"\n";break;}
           else if(h>0){h=2*h;}
        }

        if(h>0)
        cout<<"NO"<<"\n";
    
    }
     return 0;
}