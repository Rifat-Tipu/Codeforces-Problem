
///           B I S M I L L A H I R  R A H M A N I R  R A H I M


#include<bits/stdc++.h>
using namespace std;
#define e endl
#define ll int64_t
#define ld long double
#define pi 3.1415926535897932384626433832795l
#define speed() ios_base::sync_with_stdio(false);cin.tie(NULL);
void abul()
{
    ll k,n,w;
    ll sum=0;
    cin>>k>>n>>w;
    for(ll i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    if(sum<=n)
    {
        cout<<0<<e;
    }
    else
    {
        cout<<sum-n<<e;
    }

}

 int main()
{
speed();

   abul();

   return 0;
}
