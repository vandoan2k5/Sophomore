#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod=1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    long long so5=5, so10=10;
    int demso5=0, demso10=0;
    int cntb5=1,cntb10=1;
    while(so5<=n/5 && cntb5++) so5*=5;
    int ans=0;
    while(so5!=1){
        ans+=cntb5*(n/so5-n/(so5*5));
        so5/=5; cntb5--;
    }
    cout<<ans; 

    return 0;
}