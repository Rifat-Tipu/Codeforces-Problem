// ============================================================================ //
// ||                                                                        || //
// ||             International University of Business Agriculture           || //
// ||                    and Technology, Dhaka, Bangladesh 		     || //
// ||						                             || //
// ||                            Rifat Hossain                               || //
// ||                                                                        || //
// ============================================================================ //


///           B I S M I L L A H I R  R A H M A N I R  R A H I M


#include<bits/stdc++.h>
using namespace std;
#define e endl
#define ll int64_t
#define ld long double
#define pi 3.1415926535897932384626433832795l
void gorib()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a+b==c || b+c==a || a+c==b)
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
int t;
cin>>t;
while(t--)
{
gorib();
}
return 0;
}
