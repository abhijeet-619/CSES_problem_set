#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(j,a,b) for(int j=a;j<b;j++)

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin>>s;
  map<char,int>mp;
  for(auto x:s){
        mp[x]++;
  }
  string str;
  int odd=0;
  char c;
  for(auto x:mp){
    if(x.second&1){
        odd++;
        c=x.first;
    }
    if(odd>=2){
        cout<<"NO SOLUTION";
        return 0;
    }else{
        for(int j=0;j<x.second/2;j++){
            str+=x.first;
        }
    }
  }
  string g=str;
  reverse(g.begin(),g.end());
  if(odd==1){
  str+=c;
  }
  str+=g;
cout<<str;

  return 0;
}