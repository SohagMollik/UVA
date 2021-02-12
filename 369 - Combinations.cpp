#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll nCr(ll n,ll r)
{
 if(n==r)return 1;
  if(r==1)return n;
  return nCr(n-1,r-1)+nCr(n-1,r);
}
int main()
{
   ll n,r;
   while(cin>>n>>r){
        if(n==0&&r==0)break;
   cout<<n<<" things taken "<<r<<" at a time is "<<nCr(n,r)<<" exactly."<<endl;
   }
}

