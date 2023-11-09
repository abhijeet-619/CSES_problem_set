#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(j,a,b) for(int j=a;j<b;j++)

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
  ll x,y;
  cin>>x>>y;
  if(x==1 && y==1){
    cout<<1;
  }else
  if(x==1 && y==2){
    cout<<2;
  }else
  if(x==2 && y==1){
    cout<<4;
  }else
  if(x==2 && y==2){
    cout<<3;
  }else
  if(x==y){
    cout<<(x*x)-(x-1);
  }else{
    if((y>x && (y&1)==0)){
      cout<<((y-1)*(y-1))+x;
    }else
     if((y>x && (y&1)==1)){
      cout<<((y)*(y))-(x-1);
    }else
     if((y<x && (x&1)==0)){
      cout<<((x)*(x))-(y-1);
    }else
     cout<<((x-1)*(x-1))+y;
    
  }
  cout<<endl;
  }
 return 0;
}