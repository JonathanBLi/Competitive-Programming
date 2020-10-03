#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    int a = 0;
    int b = 0;
    int c = 0;
    double avgx = 0;
    double avgy = 0;
    int total = 0;
    for (int i = 0; i < N; i++) {
      cin >> a >> b >> c;
      avgx += a * c;
      avgy += b * c;
      total += c;
    }
    avgx = (double) avgx / total;
    avgy = (double) avgy / total;
    cout<<avgx<<" "<<avgy;
    cout.flush();
    return 0;
}