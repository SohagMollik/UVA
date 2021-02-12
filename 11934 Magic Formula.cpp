#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll a,b,c,d,l;
  while(cin>>a>>b>>c>>d>>l){
    if(a==0&&b==0&&c==0&&d==0&&l==0)
        break;
        ll t=0,sum=0,p,q;
    for(int x=0;x<=l;x++){
         p=a*(x*x);
         q=b*x;
        sum=p+q+c;
        if(sum%d==0)
            t++;
    }
    cout<<t<<endl;
  }
}
