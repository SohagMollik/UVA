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
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if((b-a)==1&&(c-b)==1&&(d-c)==1&&(e-d)==1)cout<<"Y\n";
        else cout<<"N\n";
    }

    return 0;
}
