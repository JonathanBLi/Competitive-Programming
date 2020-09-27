#include <bits/stdc++.h>
#define MAX 2147483647
using namespace std;

void solve() {
    int N; cin>>N;
    long K; cin>>K;
    vector<pair<long,long>> A(N+1);
    for (int i=0; i<N; i++) {
        cin>>A[i].first;
        cin>>A[i].second;
    }
    A[N].first=MAX; A[N].second=MAX;
    sort(A.begin(), A.end());
    int ans=1;
    long cur=A[0].first+K;
    for (int i=0; i<N; i++) {
        if (cur<A[i].second) {
            int x=0;
            if ((A[i].second-cur)%K==0) {
                x=(A[i].second-cur)/K;
            } else {
                x=(A[i].second-cur)/K+1;
            }
            ans+=x;
            cur+=x*K;
        }
        if (cur>=A[i].second) {
            cur=max(cur,A[i+1].first);
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