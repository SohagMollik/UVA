#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t){
        int a[5],c=0;
        for(int i=0;i<5;i++){
            cin>>a[i];
            if(t==a[i]){
                c++;
            }
        }
        cout<<c<<endl;
    }
}
