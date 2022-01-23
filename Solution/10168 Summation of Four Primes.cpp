#include<bits/stdc++.h>
using namespace std;
#define N 10000005
bool prime[N];
vector<int>v;
void sieve(int n)
{
   for(int i=0;i<n;i++){
    prime[i]=true;
   }
   prime[0]=false;
   prime[1]=false;
   for(int i=4;i<=n;i+=2){
    prime[i]=false;
   }
   for(int i=3;i*i<=n;i+=2){
    if(prime[i]==true){
        for(int j=i*i;j<n;j+=2*i){
            prime[j]=false;
        }
    }
   }
   v.push_back(2);
   for(int i=3;i<n;i+=2){
    if(prime[i]==true)
        v.push_back(i);
   }
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;
    while(cin>>n){
        if(n<8)
        {
          cout<<"Impossible.\n";
        }
        else if(n%2!=0){
          sieve(n);
          int ok=n-5;
          int ans,x;
           for(int i=0;i<v.size();i++){
              x=ok-v[i];
            for(int j=i;j<v.size();j++){
                if(x==v[j]){
                   ans=v[j];
                   cout<<"2 3 "<<v[i]<<" "<<ans<<endl;
                   v.clear();
                   break;
                }
            }
           }

        }
        else{
           sieve(n);
          int ok=n-4;
          int ans,x;
           for(int i=0;i<v.size();i++){
               x=ok-v[i];
            for(int j=i;j<v.size();j++){
                if(x==v[j]){
                   ans=v[j];
                   cout<<"2 2 "<<v[i]<<" "<<ans<<endl;
                  v.clear();
                   break;
                }
            }
           }

        }
    }
    return 0;
}
