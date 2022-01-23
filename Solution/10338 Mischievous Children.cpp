#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main ()
{
    ll n,i=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        ll len=s.length();
        ll fact=1,j;
        i++;
        for(j=1;j<=len;j++){
            fact*=j;
        }
        cout<<"Data set "<<i<<":"<<" "<<fact/2<<endl;
    }
}
