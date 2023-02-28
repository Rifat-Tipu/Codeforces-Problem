
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
    ll n,k;
    cin>>n>>k;
    ll p=k;
    while(p--)
    {
        if(n%10!=0)
        {
            n=n-1;
        }
        else
        {
            n=n/10;
        }
    }
    cout<<n<<e;

}

 int main()
{
speed();

   abul();

   return 0;
}
