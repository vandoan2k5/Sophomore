#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long calculateWays(int K) {
    long totalWays = ((long) K * K * (K * K - 1)) / 2;
    long attackingWays = 4 * (K - 1) * (K - 2);
    long ans = totalWays - attackingWays;
    return ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int N; cin>>N;
    for (int K = 1; K <= N; K++) {
        cout << calculateWays(K) << endl;
    }
    return 0;
}