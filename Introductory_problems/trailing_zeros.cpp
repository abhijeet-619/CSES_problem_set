#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(j,a,b) for(int j=a;j<b;j++)

int main(){
   int n;
   cin>>n;
   int ans=0;
   for(int i=5;n/i>=1;i*=5){
    ans+=(n/i);
   }
   cout<<ans;
    return 0;
}