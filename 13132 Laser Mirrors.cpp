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
int max_coin(int n)
{
    int ans=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0)
                n/=i;
            ans-=(ans/i);
        }
    }
    if(n>1)ans-=(ans/n);

    return ans;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         cout<<max_coin(n)<<endl;

    }

    return 0;
}
