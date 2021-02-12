#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    char n[10000];
    cin>>n;
    ll fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*n[i];
  }
  cout<<fact<<endl;
}
