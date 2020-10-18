#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin>>N;
    long long C[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin>>C[i][j];
        }
    }
    long long ans = INT_MIN;
    for (int i = 0; i < 2*N-1; i++) {
        int z = (i < N) ? 0 : i-N+1;
        long long maxi = INT_MIN;
        long long cur = 0;
        for (int j = z; j <= i-z; j++) {
            cur = max(C[j][N-1-i+j], cur+C[j][N-1-i+j]);
            maxi = max(maxi, cur);
        }
        if (maxi > ans) {
            ans = maxi;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T; cin>>T;
    for (int i=0; i<T; i++) {
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
    cout.flush();
    return 0;
}