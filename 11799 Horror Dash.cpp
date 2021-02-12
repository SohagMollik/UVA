#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        j++;
        cout<<"Case "<<j<<": "<<a[0]<<endl;
    }
}
