#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll dp[105][105];
ll nCm(ll n,ll m)
{
    if(n==m)return dp[n][m]=1;
    if(m==0)return dp[n][m]=1;
    if(m==1)return dp[n][m]=n;
    if(dp[n][m])return dp[n][m];
    return dp[n][m]=nCm(n-1,m)+nCm(n-1,m-1);
}
int main()
{
 ll n,m;
 while(cin>>n>>m){
 if(n==0&&m==0)break;
 else{
    cout<<n<<" "<<"things taken "<<m<<" at a time is "<<nCm(n,m)<<" exactly."<<endl;
 }

 }

}

