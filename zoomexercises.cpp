#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

ll mulmod(ll a,ll b,ll c) { 
  ll x=0,y=a%c; 
  while(b>0) { 
    if(b%2==1) x=(x+y)%c; 
    y=(y*2)%c; 
    b/=2; 
  } 
  return x%c; 
}

ll mulmodfast(ll a,ll b,ll mod) {
  a%=mod; 
  b%=mod; 
  long double res = a; 
  res*=b; 
  ll c = (ll)(res/mod); 
  a*=b; 
  a-=(c*mod); 
  a%=mod; 
  if(a<0)a+=mod; 
  return a; 
} 
 
ll modulo(ll a,ll b,ll c){ 
  ll x=1,y=a;
  while(b>0){ 
    if(b%2 == 1) x=mulmod(x,y,c);
    y=mulmod(y,y,c);
    b/=2; 
  } 
  return x%c; 
}

bool Miller(ll p,int iteration){ 
  if(p<2) return 0; 
  if(p!=2&&p%2==0) return 0; 
  for(int i=0;i<25;i++) { 
    if(p==prime[i]) return 1; 
    else if(p%prime[i]==0) return 0; 
  } 
  ll s=p-1; 
  while(s%2==0) s/=2; 
  for(int i=0;i<iteration;i++){ 
    ll a=rand()%(p-1)+1,temp=s; 
    ll mod=modulo(a,temp,p); 
    while(temp!=p-1&&mod!=1&&mod!=p-1){ 
      mod=mulmod(mod,mod,p); 
      temp*=2; 
    } 
    if(mod!=p-1 && temp%2==0) return 0; 
  }
  return 1; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    ll a = 0;
    ll pushups = 0;
    for (int i = 0; i < N; i++) {
      cin >> a;
      if (Miller(a,100)) {
        pushups += 2*a;
      }
    }
    cout<<pushups;
    cout.flush();
    return 0;
}