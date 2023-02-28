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
    ll n,h;
    cin>>n>>h;
    ll arr[n+1];
    ll cnt1=0;
    ll cnt2=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=h)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    ll ans=(cnt2*2)+cnt1;
    cout<<ans<<e;


}

 int main()
{
speed();

   abul();

   return 0;
}
