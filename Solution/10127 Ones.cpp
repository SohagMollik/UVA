#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin>>n){
        int ok=1,ans=1;
        while(ok%n!=0){
            ok=ok*10+1;
            ok=ok%n;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
