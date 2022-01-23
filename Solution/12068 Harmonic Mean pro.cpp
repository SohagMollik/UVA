#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    ll rem;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll a[n],mul=1,sum=0,temp=0,num,j=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mul*=a[i];
    }
    for(int i=0;i<n;i++)
        sum+=mul/a[i];

    num=n*mul;
    temp=sum;
        j++;
    cout<<"Case "<<j<<": "<<num/gcd(num,temp)<<"/"<<temp/gcd(num,temp)<<endl;

   }

}
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
    ll rem;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    ll N,i,t,j;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%lld",&N);
        ll mul=1,sum=0,A[1000],num,den=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
            mul*=A[i];
        }
        for(i=0;i<N;i++)
            sum+=mul/A[i];
          num=N*mul;
        den=sum;
            printf("Case %lld: %lld/%lld\n",j,num/gcd(num,den),den/gcd(num,den));
    }
    return 0;
}
