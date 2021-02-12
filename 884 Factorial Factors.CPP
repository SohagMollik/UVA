#include<bits/stdc++.h>
using namespace std;
#define mac 1000005
bool flag[mac];
int prime[mac];
int bal[mac];
vector<int>v;
int sieve(int n)
{
    int i,j,sum,k=0;
    for(i=1;i<=n;i++)flag[i]=true;
    for(i=4;i<=n;i+=2)flag[i]=false;
    for(i=3;i*i<=n;i+=2){
     if(flag[i]==true){
        for(j=i*i;j<=n;j+=2*i)flag[j]=false;
            }
    }
    sum=1;
    int s=0;
    bal[s]=2;
    s=1;
    for(i=3;i<=n;i+=2){
        if(flag[i]==true){
            bal[s++]=i;
                sum++;
        }
    }
    k=0;
    for(i=4;i<=n;i++){
        if(flag[i]==false)
            prime[k++]=i;
    }
    int val;
    for(i=0;i<k;i++){
       //cout<<prime[i]<<" ";
      val=sqrt(prime[i])+1;
    }
    cout<<val<<" ";
cout<<endl;
}
/*int Uva_884(int n)
{
    int i,val,sum=0;
    val=sqrt(n)+1;
    for(i=0;i<=val;i++){
        if(n%prime[i]==0){
            int c=0;
            while(n%prime[i]==0){
                n/=prime[i];
                c++;
            }
            sum+=c;
        }
    }
    if(n>1)sum=1;
    return sum;
}*/
int main()
{
    int n;
    while(cin>>n){
        sieve(n);
       // cout<<Uva_884(n)<<endl;
    }
}
