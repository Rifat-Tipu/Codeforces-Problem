
//           B I S M I L L A H I R  R A H M A N I R  R A H I M


#include<bits/stdc++.h>
using namespace std;
#define e endl
#define ll long long
#define ld long double
#define pi 3.1415926535897932384626433832795l
#define speed() ios_base::sync_with_stdio(false);cin.tie(NULL);
void abul()
{
    ll n;
    cin>>n;
    ll cnt1=0;
    while(n>0)
    {
        if(n%10==4 || n%10==7)
        {
            cnt1++;
        }
        n=n/10;

    }
    if(cnt1==4 || cnt1==7)
    {
        cout<<"YES"<<e;
    }
    else
    {
        cout<<"NO"<<e;
    }


}

 int main()
{
speed();

   abul();

   return 0;
}
