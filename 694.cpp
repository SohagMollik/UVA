#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,l,i=1;
    while(t--){
        int a,l;
        cin>>a>>l;
        int A = a;
        if(a<0 and l<0)return 0;
        int cnt=1;
        while(1){
            if(a%2!=0)a = (3*a+1);
            else a/=2;
            if(a>l)break;
            if(a==1){
                cnt++;
                break;
            }
            cnt++;
        }
cout<<"Case"<<" "<<i<<":"<<" "<<"A"<<" "<<"="<<" "<<A<<","<<" "<<"limit"<<" "<<"="<<" "<<l<<","<<" "<<"number of terms ="<<" "<<cnt<<endl;
        i++;
    }
    return 0;
}


