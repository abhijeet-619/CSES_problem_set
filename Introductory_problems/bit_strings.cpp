#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(j,a,b) for(int j=a;j<b;j++)
const int mod=1e9+7;

ll bin_expo(ll base,ll power){
    ll res=1;
    while(power>=1){
        if(power&1){
            res=(res*base)%mod;
        }
        base=(base*base)%mod;
        power=power>>1;
    }
    return res;
}

int main()
{
 ll n;
 cin>>n;
 cout<<bin_expo(2,n);
return 0;
}
