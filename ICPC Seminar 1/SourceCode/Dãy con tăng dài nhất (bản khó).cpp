#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int a[n+1]; for(int i=1; i<=n; i++) cin>>a[i];
    int lis[n+1]; lis[1]=a[1];
    int maxdp=1;
    
    for(int i=2;i<=n;i++){
        auto it = lower_bound(lis+1,lis+maxdp+1, a[i]);
        *it=a[i];
        maxdp=max(maxdp,int(it-lis));
    }
    cout<<maxdp;
    
    return 0;
}