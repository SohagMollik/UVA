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
    fast;
    int test;
    cin>>test;
    int x=1;
    while(test--)
    {
        int a[13];
        int answer=0;
        for(int i=0;i<13;i++){
            cin>>a[i];
            if(a[i]==0)answer=-1;
        }
        if(answer==-1)cout<<"Set #"<<x<<": "<<"No\n";
        else cout<<"Set #"<<x<<": "<<"Yes\n";
        x++;
    }

    return 0;
}
