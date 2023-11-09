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
  int n=s.length();
  int maxi=1,c=1;
  f(j,0,n-1){
    if(s[j]==s[j+1]){
        c++;
        maxi=max(maxi,c);
    }else{
        c=1;
    }
  }
  cout<<maxi;
 return 0;
}