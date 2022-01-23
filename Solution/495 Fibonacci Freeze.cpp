#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ok[5000]={0};
ll fib(ll n)
{
    if(n==0)return 0;
    if(n==1 or n==2)return (ok[n]=1);
    if(ok[n])return ok[n];
    ll k=(n&1)? (n+1)/2 : n/2;
    ok[n]=(n&1)?(fib(k)*fib(k) + fib(k-1)*fib(k-1)) : (2*fib(k-1)+fib(k))*fib(k);
 return ok[n];
}
int main()
{
    ll n;

    while(cin>>n)
  {
        cout<<"The Fibonacci number for "<<n<<" is "<<fib(n)<<endl;
  }
return 0;
}
