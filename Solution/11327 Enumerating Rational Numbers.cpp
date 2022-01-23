#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll n=2e5+5;
ll phi[n];
void solve()
{
    phi[0]=0;
    phi[1]=2;
    for(int i=2;i<=n;i++){
        phi[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(phi[i]==i){
            for(int j=i;j<=n;j+=i){
                phi[j]-=phi[j]/i;
            }
        }
        phi[i]=phi[i]+phi[i-1];
    }
}
int main()
{
   fast;
   solve();
    ll k;
    while(cin>>k&&k!=0){
         if(k==1){cout<<"0/1"<<endl;continue;}
         if(k==2){cout<<"1/1\n";continue;}
        else{
        ll x=lower_bound(phi,phi+n,k)-phi;
        int c=0;
        ll y=(k-phi[x-1]);
        for(ll i=1;i<=x;i++){
            if(__gcd(i,x)==1)c++;
            if(c==y){
                cout<<i<<"/"<<x<<endl;
                break;
            }
        }
        }
    }

    return 0;
}
