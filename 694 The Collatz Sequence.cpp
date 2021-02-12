#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,l,c,i=0;
    while(cin>>a>>l){
            ll temp=a;
             if(a<0&&l<0){
                break;
            }

    else{
            i++;
        c=1;
        while(a!=1){
             if(a%2==0) {
                a/=2;
            }
            else {
                a=a*3+1;
            }
            if(a>l)
                break;

           c++;

        }
        cout<<"Case"<<" "<<i<<":"<<" "<<"A"<<" "<<"="<<" "<<temp<<","<<" "<<"limit"<<" "<<"="<<" "<<l<<","<<" "<<"number of terms ="<<" "<<c<<endl;
    }
}
}
