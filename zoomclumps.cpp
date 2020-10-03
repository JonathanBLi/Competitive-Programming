#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    char A[N];
    int clumps = 1;
    for (int i = 0; i < N; i++) {
        cin>>A[i];
        if (i > 0 && A[i] != A[i-1]) {
            clumps++;
        }
    }
    cout<<clumps;
    cout.flush();
    return 0;
}