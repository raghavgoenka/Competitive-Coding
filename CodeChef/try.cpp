#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    for(int i=1;i<=n;i++) {
	        cin>>arr[i];
	    }
	
	    
	    while(m--) {
	        int p;
	        cin>>p;
	        
	        int k=p+1,l=p-1;
	        int c1=0,c2=0;
            int mn=INT_MAX;
	        while(k<=n || l>=1) {
	            if(arr[l]==1&&l>=1){c1++;}
                if(arr[k]==2&&k<=n){c2++;}
                if(c1>=1||c2>=1)
                 { if(c1>=1&&c2>=1){mn=min(abs(k-p),abs(l-p));break;}  
                    else if(c1>=1&&c2==0){mn=abs(l-p);break;}
                    else if(c2>=1&&c1==0){mn=abs(k-p);break;}}
                    k++;
                    l--;
	        }
	        
	      
             if(c1==0&&c2==0){cout<<"-1"<<" ";}
           
           cout<<mn<<" ";

	}
	cout<<"\n";
}
	return 0;
}