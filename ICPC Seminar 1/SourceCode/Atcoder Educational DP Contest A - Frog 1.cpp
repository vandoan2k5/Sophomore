#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin>>n;
    int a[n+1]; for(int i=1;i<=n;i++) cin>>a[i];
    int dp[n+1]={0};
    dp[2] = abs(a[1]-a[2]);
    for(int i=3;i<=n;i++)
        dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]), dp[i-2]+abs(a[i]-a[i-2]));
    cout<<dp[n];
    return 0;
}