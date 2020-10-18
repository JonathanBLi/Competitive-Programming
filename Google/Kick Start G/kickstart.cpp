#include <bits/stdc++.h>
using namespace std;

void solve() {
    string S;
    cin>>S;
    int kickInd = 0;
    int ans = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S.substr(i,4)=="KICK") {
            kickInd++;
        }
        if (S.substr(i,5)=="START") {
            ans += kickInd;
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