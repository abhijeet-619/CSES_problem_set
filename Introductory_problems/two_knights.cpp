#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(j,a,b) for(ll j=a;j<=b;j++)

int main()
{
    ll n;
    cin>>n;
    f(j,1,n){
        cout<<(((j*j)*((j*j)-1))/2)-(4*((j-1)*(j-2)))<<endl;
    }
    return 0;
}