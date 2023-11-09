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
  ll maxi,ans=0;
  cin>>maxi;
  f(j,0,n-1){
    ll x;
    cin>>x;
   if(x<maxi){
    ans+=(maxi-x);
   }else{
    maxi=x;
   }
  }
  cout<<ans;
 return 0;
}