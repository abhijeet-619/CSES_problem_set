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
  cout<<n<<" ";
  while(n!=1){
    if(n&1){
        n*=3;
        n++;
    }else{
        n=n>>1;
    }
    cout<<n<<" ";
  }
 return 0;
}