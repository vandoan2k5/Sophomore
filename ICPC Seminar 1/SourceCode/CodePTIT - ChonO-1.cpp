#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin>>n;
    int a[n+1][n+1][n+1];
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[1][i][j];
        }
    }

    for(int maxpool =2; maxpool<=n;maxpool++){
        for(int i=1;i<=n-maxpool+1;i++){
            for(int j=1;j<=n-maxpool+1;j++){
                a[maxpool][i][j]=max({
                    a[maxpool-1][i][j] + a[1][i+maxpool-1][j+maxpool-1],
                    a[maxpool-1][i+1][j] + a[1][i][j+maxpool-1],
                    a[maxpool-1][i][j+1] + a[1][i+maxpool-1][j],
                    a[maxpool-1][i+1][j]+1 + a[1][i][j]
                });
            }
        }
    }
    cout<<a[n][1][1]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin>>test;
    while(test--) solve();
    return 0;
}