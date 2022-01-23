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
int solve(int a,int b,int& x,int& y)
{
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    int xx,yy;
    int ans=solve(b%a,a,xx,yy);
    x=yy-(b/a)*xx;
    y=xx;
    return ans;
}
int main()
{
    fast;
    int a,b,x,y,d;
    while(cin>>a>>b)
    {
        d=solve(a,b,x,y);
    if(a==b){
       x=0;
       y=1;
    }

        cout<<x<<" "<<y<<" "<<d<<endl;

    }

    return 0;
}
