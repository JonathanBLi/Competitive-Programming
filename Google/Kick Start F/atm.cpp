#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin>>N;
    long X; cin>>X;
    vector<pair<long,long>> A(N);
    for (int i=0; i<N; i++) {
        cin>>A[i].first;
        A[i].first = (A[i].first-1)/X;
        A[i].second = i;
    }
    sort(A.begin(), A.end());
    for (int i=0; i<N; i++) {
        cout<<A[i].second + 1<<" ";
    }
    cout<<"\n";
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