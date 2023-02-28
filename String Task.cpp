
///           B I S M I L L A H I R  R A H M A N I R  R A H I M


#include<bits/stdc++.h>
using namespace std;
#define e endl
#define ll int64_t
#define ld long double
#define pi 3.1415926535897932384626433832795l
#define speed() ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

void gorib()
{
    ll n;
    cin>>n;
    ll a[n];
    ll chk=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            chk++;
        }
    }
    cout<<n-(chk/2)<<e;

}

int main()
{
 speed();
int t;
cin>>t;
while(t--)
{
gorib();
}
return 0;
}
