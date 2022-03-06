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
    int t,k=1;
    cin>>t;
    while(t--)
    {
        string s;
        int n,mx;
        vector<string>v;
        vector<int>v1;
        for(int i=0;i<10;i++)
        {
            cin>>s>>n;
            v.pb(s);
            v1.pb(n);
        }
        mx=*max_element(v1.begin(),v1.end());
        cout<<"Case #"<<k<<":\n";
    for(int i=0;i<10;i++){
        if(mx==v1[i])cout<<v[i]<<endl;
    }
    k++;
    }
    return 0;
}
