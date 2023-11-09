#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(j,a,b) for(int j=a;j<b;j++)

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin>>n;
  ll sum=0;
  f(j,0,n-1){
    ll x;
    cin>>x;
    sum+=x;
  }
  n=(n*(n+1))/2;
  cout<<n-sum;
 return 0;
}