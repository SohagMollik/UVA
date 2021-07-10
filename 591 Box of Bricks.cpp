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
    int n,k=0;
    while(cin>>n)
    {
        if(n==0)break;
        else{
            int a[n],sum=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                sum+=a[i];
            }
            int avg=sum/n;
            int x=0;
            for(int i=0;i<n;i++){
                if(a[i]>avg )x+=(a[i]-avg);
            }
            k++;

        cout<<"Set #"<<k<<"\n"<<"The minimum number of moves is "<<x<<"."<<endl<<endl;;
        }
    }

    return 0;
}
