#include <bits/stdc++.h>
using namespace std;

int threeSum(long A[], int N) {
  int count=0;
  sort(A,A+N);
  for (int i=0; i<N; i++) {
    long x=A[i];
    int m=i+1;
    int n=N-1;
    while (m<n) {
      long y=A[m];
      long z=A[n];
      if (x+y+z==0) {
        count++;
        n--;
      }
      else if (x+y+z>0) n--;
      else m++;
    }
  }
  return count;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  freopen("threesum.in", "r", stdin);
  freopen("threesum.out", "w", stdout);
  int N, Q; cin>>N>>Q;
  long A[N];
  for (int i=0; i<N; i++) {
    cin>>A[i];
  }
  for (int i=0; i<Q; i++) {
    int a, b; cin>>a>>b;
    int l=b-a+1;
    long S[l];
    for (int j=0; j<l; j++) {
      S[j]=A[j+a-1];
    }
    cout<<threeSum(S,l)<<"\n";
  }
  return 0;
}