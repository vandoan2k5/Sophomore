#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin>>n;
    int a[n+1], dp[n+1];
    int ans=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        dp[i]=1;
        for(int j=1;j<i;j++){
            if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+1);
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}