#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long int bigmod(long long b,long long p,long long m){
  if(p==0)
        {
            return 1;
        }
        else if(p%2==0){
           long long   a=bigmod(b,p/2,m);
          return (a*a)%m;
        }
        else if(p%2==1){
           long long  c=b%m;
           long long d=bigmod(b,p-1,m);
            return (c*d)%m;
        }
}
int main()
{
    long long int b,p,m;
    while(cin>>b>>p>>m){
       printf("%lld\n",bigmod(b,p,m));
    }
}

