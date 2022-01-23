#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int x=n;
    if(n<=100)
        {
            cout<<"f91"<<"("<<x<<")"<<" = "<<91<<endl;
        }
    else if(n>=101)
       {
          cout<<"f91"<<"("<<x<<")"<<" = "<<n-10<<endl;
       }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin>>n){
        if(n==0)break;
        else{
        solve(n);
        }
    }
    return 0;
}
