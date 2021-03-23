#include<bits/stdc++.h>
using namespace std;
int const N = 21474836;
int a[N];
int prime[N];
vector<int>v;
int sieve()
{
    int k=0;
    a[0]=1;
    a[1]=1;
    for(int i=0;i<N;i++){
        a[i]=0;
    }
    for(int i=4;i<=N;i+=2){
        a[i]=1;
    }
    for(int i=3;i*i<=N;i+=2){
       if(a[i]==0){
        for(int j=i*i;j<=N;j+=2*i){
            a[j]=1;
        }
       }
    }
    prime[k]=2;
    k=1;
    for(int i=3;i<=N;i+=2){
        if(a[i]==0){
            prime[k++]=i;
        }
    }
    return k;
}
void divisor(int n)
{
    int x,t=n;
    if(n<0){
    n=(-1)*(n);
  for(int i=0;prime[i]<=sqrt(n);i++){
    if(n%prime[i]==0){
        while(n%prime[i]==0){
                x=prime[i];
              v.push_back(x);
            n/=prime[i];
        }
    }
  }
  if(n>1){v.push_back(n);}
}
else{
   for(int i=0;prime[i]<=sqrt(n);i++){
    if(n%prime[i]==0){
        while(n%prime[i]==0){
                 x=prime[i];
              v.push_back(x);
            n/=prime[i];
        }
    }
  }
  if(n>1){v.push_back(n);}
}

 if(t>0){
        cout<<t<<" = "<<v[0];
        for(int i=0;i<v.size()-1;i++){
            printf(" x %d",v[i+1]);
        }
        cout<<endl;
      }
    else{
            cout<<t<<" = "<<-1;
        for(int i=0;i<v.size();i++){

          printf(" x %d",v[i]);
        }
      cout<<endl;
      }

      v.clear();
}
int main()
{
   sieve();
   int n;
   while(cin>>n)
   {
      if(n==0)break;

      else {
        divisor(n);
      }
   }
   return 0;
}
