#include <bits/stdc++.h>
using namespace std;

int C(int n, int k){
    int dp[n+1][k+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=min(i,k); j++){
            if(j==0 || j==i){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
    }
    return dp[n][k];
}

int main(){
    cout << "Enter the values of n and k: ";
    int n,k; cin >> n >> k;
    int ans = C(n,k);
    cout << "\nBinomial Coefficient is " << ans << endl << endl;
    return 0;
}