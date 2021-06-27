#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    //freopen("input.txt","r",stdin);
    fast
    ll int t,a,b,c,d,e,n,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        a=max(c,d);
        b=min(c,d);

        if((a+b)%3==0 && b*2>=a)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


}
