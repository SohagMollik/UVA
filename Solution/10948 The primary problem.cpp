#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;
 vector<int>prime;
void solve()
{
    int sz=1000001;
    vector<int>v(sz+1,0);
    v[0]=1;
    v[1]=1;
    for(int i=2;i*i<=sz;i++){
            if(v[i]==0){
        for(int j=i*i;j<=sz;j+=i){
            v[j]=1;
            }
        }
    }
    prime.pb(2);
    for(int i=3;i<=sz;i++){
        if(v[i]==0)prime.pb(i);
    }

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 solve();

    int n;
       while(cin>>n){
        if(n==0)return 0;
       else  {

    int low=0,high=prime.size()-1;
    int flag=0;

    while(low<=high){
        if(prime[low]+prime[high] == n){
            cout<<n<<":\n"<<prime[low]<<"+"<<prime[high]<<nn;
            flag=1;
            break;
        }
        if(prime[low]+prime[high]>n)high--;
        else low++;
    }

    for(int i=0;i<prime.size();++i){
        if(flag==0 && ((prime[i]+prime[i])==n)){
            cout<<n<<":\n"<<prime[i]<<"+"<<prime[i]<<nn;
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<n<<":\n"<<"NO WAY!\n";

        }

       }

    return 0;
}


