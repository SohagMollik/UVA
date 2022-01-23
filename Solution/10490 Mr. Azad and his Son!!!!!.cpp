#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)break;
        ll c=0;
       for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            c++;
        }
       }

       ll c1=0,ok,ans,temp;
       if(c==0){
         ok=n-1;
         ans=pow(2,ok);
         temp=pow(2,n)-1;
        for(ll j=2;j<=sqrt(temp);j++){
            if(temp%j==0){
                c1++;
            }
        }


    if(c==0&&c1==0)
         cout<<"Perfect: "<<ans*temp<<"!\n";
    else if(c==0&&c1!=0)
         cout<<"Given number is prime. But, NO perfect number is available.\n";
       }
    else
        cout<<"Given number is NOT prime! NO perfect number is available.\n";
    }
}
