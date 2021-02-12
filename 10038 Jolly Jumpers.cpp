#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[3500],dif[3500],i;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=0;i<n-1;i++){
            dif[i]=abs(a[i+1]-a[i]);
        }
        sort(dif,dif+n-1);
       bool ans=true;
        for(i=0;i<n-1;i++){
            if(dif[i]!=i){
                ans=false;
        }
        }
        if(ans==false)
            cout<<"Not jolly"<<endl;
        else
          cout<<"Jolly"<<endl;

    }
}
