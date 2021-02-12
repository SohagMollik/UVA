#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int t;
    long long n,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        n=(sqrt(1+8*x)-1)/2;
        cout<<n<<endl;
    }
}
