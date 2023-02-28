
//           B I S M I L L A H I R  R A H M A N I R  R A H I M


#include<bits/stdc++.h>
using namespace std;
#define e endl
#define ll int64_t
#define ld long double
#define pi 3.1415926535897932384626433832795l
#define speed() ios_base::sync_with_stdio(false);cin.tie(NULL);
void abul()
{
    ll n,in,ot;
    cin>>n;
    ll sum=0;
    ll mx=0;
    while(n--)
    {
        cin>>ot>>in;
        sum=sum+(in-ot);
        mx=max(mx,sum);
    }
    cout<<mx<<e;

}

 int main()
{
speed();

   abul();

   return 0;
}
