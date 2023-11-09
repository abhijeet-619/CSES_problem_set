#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(j,a,b) for(int j=a;j<b;j++)

int main()
{
 ll n;
 cin>>n;
 ll t=(n*(n+1))/2;
 if(t&1){
    cout<<"NO";
 }else{
    cout<<"YES"<<endl;
    t/=2;
    vector<int>v1,v2;
    for(int j=n;j>=1;j--){
        if(t>=j){
            v1.push_back(j);
            t-=j;
        }else{
            v2.push_back(j);
        }
    }
    cout<<v1.size()<<endl;
    for(auto x:v1){
        cout<<x<<" ";
    }cout<<endl;
     cout<<v2.size()<<endl;
    for(auto x:v2){
        cout<<x<<" ";
    }
 }
return 0;
}