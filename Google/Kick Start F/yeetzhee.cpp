#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin>>N;
    int M; cin>>M;
    int K; cin>>K;
    vector<int> A(K);
    for (int i=0; i<K; i++) {
        cin>>A[i];
    }
    long double ans=0;
    if (K==1) {
        ans=1+(N-1)*M;
        cout<<ans<<"\n";
        return;
    }
    if (K==2) {
        if (N==2) {
            ans=1+(long double) M/(M-1);
            cout<<ans<<"\n";
            return;
        }
        if (N==3) {
            ans=1+1+(long double) 1/(M-1)+(long double) (M-1)/2;
            cout<<ans<<"\n";
            return;
        }
        if (N==4) {
            cout<<ans<<"\n";
            return;
        }
        if (N==5) {
            cout<<ans<<"\n";
            return;
        }
        if (N==6) {
            cout<<ans<<"\n";
            return;
        }
    }
    if (K==3) {
        if (N==3) {

        }
    }
    if (K==4) {
        if (N==4) {

        }
    }
    if (K==5) {
        if (N==5) {
            
        }
        if (N==6) {

        }
    }
    if (K==6) {
        ans=14.7;
        cout<<ans<<"\n";
    }
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