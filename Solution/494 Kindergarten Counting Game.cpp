#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define mod   1000000007
#define pi    acos(-1.0)
#define yes   cout<<"YES\n";
#define no    cout<<"NO\n";
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    char s[1001];
    while(gets(s)){
            int count=0,ok=0;
        for(int i=0;s[i];i++){
            if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')ok=1;
            else{
                count+=ok;
                ok=0;
            }
        }

        count+=ok;
        cout<<count<<endl;

    }

    return 0;
}
