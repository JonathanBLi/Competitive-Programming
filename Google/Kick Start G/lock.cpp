#include <bits/stdc++.h>
using namespace std;

int median(vector<int> v) {
    int med = 0;
    if (v.size()%2 == 1){ 
        nth_element(v.begin(), v.begin()+v.size()/2, v.end());
        med = v[v.size()/2];
    } else {
        nth_element(v.begin(), v.begin()+v.size()/2-1, v.end());
        nth_element(v.begin(), v.begin()+v.size()/2, v.end());
        med = (v[v.size()/2-1]+v[v.size()/2])/2;
    }
    return med;
}

void solve() {
    int W; cin>>W;
    int N; cin>>N;
    vector<int> v(W);
    vector<int> u(W);
    for (int i = 0; i < W; i++) {
        cin>>v[i];
        u[i]=v[i];
        if (v[i] > N/2) {
            v[i] -= N;
        }
    }
    long long ansV = 0;
    long long ansU = 0;
    for (int i = 0; i < W; i++) {
        ansV += abs(v[i]-median(v));
        ansU += abs(u[i]-median(u));
    }
    cout<<min(ansV, ansU)<<"\n";
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