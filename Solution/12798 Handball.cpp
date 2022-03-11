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
    int n,m,ans=0;
    while(cin>>n>>m){
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
     int ans=0;
        for(int i=0;i<n;i++){
             int not_zero=0;
            for(int j=0;j<m;j++)
            {
                if(a[i][j]!=0)not_zero++;
            }
            if(not_zero==m)ans++;

        }
        cout<<ans<<endl;
    }


    return 0;
}
