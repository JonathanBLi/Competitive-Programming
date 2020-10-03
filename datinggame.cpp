#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

typedef unsigned long long ll;
ll power(ll x, int y, int p) {
  ll res = 1;
  x = x % p;
  while (y > 0) {
    if (y & 1) 
      res = (res * x) % p; 
  
    y = y >> 1;
    x = (x * x) % p; 
  } 
  return res; 
} 

ll modInverse(ll n, int p) { 
  return power(n, p - 2, p); 
}

ll binom(ll n, int r, int p) {
  if (r == 0) 
    return 1; 
  ll fac[n + 1]; 
  fac[0] = 1; 
  for (int i = 1; i <= n; i++) 
    fac[i] = (fac[i - 1] * i) % p; 
  return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    int A[N];
    ll ev = 0;
    for (int i=0; i<N; i++) {
      cin>>A[i];
    }
    for (int i=1; i<N; i++) {
      ev += binom(N-2,i-1,MOD) * (A[i]^A[i-1]);
    }
    ev = ev % MOD;
    cout<<ev;
    cout.flush();
    return 0;
}