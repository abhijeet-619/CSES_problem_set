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
 if(n==2 || n==3){
    cout<<"NO SOLUTION";
 }else
 if(n==4){
    cout<<"3 1 4 2";
 }else{
    int a=1,b=2;
    while (a<=n)
    {
        cout<<a<<" ";
        a+=2;
    }
      while (b<=n)
    {
        cout<<b<<" ";
        b+=2;
    }
    
 }
 return 0;
}