#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back


int main()
{
    //freopen("input.txt","r",stdin);
    fast

    ll int a,b=1,c,d,n,t,mod=1000000007;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        b=((b%mod)*2)%mod;
    }
    cout<<b;

}
