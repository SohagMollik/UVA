#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,i,j=0;
    cin>>t;
    while(t--){
        cin>>k;
        bool foundone(false);
        i=2;
        j++;
        cout<<"Case"<<" "<<"#"<<j<<":"<<" "<<k<<" "<<"="<<" ";
        for( ;i<k;i++){
           if(k%i==0){
            if(!foundone){
                cout<<i<<" "<<"*"<<" "<<k/i<<" "<<"="<<" ";
             foundone = true;
            }
            else
                break;
           }
        }
        cout<<i<<" "<<"*"<<" "<<k/i<<endl;

    }
}
