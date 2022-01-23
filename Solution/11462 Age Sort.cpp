#include<bits/stdc++.h>
using namespace std;
int a[20000005];
int main()
{
    int n;

    while(cin>>n){
    if(n==0){
        break;
    }
    else{
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i];
            if(i<n-1)
                cout<<" ";
        }
        cout<<endl;

    }
}
}
