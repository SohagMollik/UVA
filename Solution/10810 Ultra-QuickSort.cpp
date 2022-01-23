#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        while(cin>>n){
        if(n==0)break;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    int ok=a[i];
                    a[i]=a[j];
                    a[j]=ok;
                    c++;
                }
            }
        }
        cout<<c<<endl;

    }
    return 0;
}
