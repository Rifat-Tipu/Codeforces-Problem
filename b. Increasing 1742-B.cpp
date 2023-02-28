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
    ll n;
    cin>>n;
    vector<int>v(n);
    for(auto &i : v)
    {
        cin>>i;
    }
    sort(v.begin(),v.end());
    ll chk=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]==v[i-1])
            chk++;
    }
    if(chk!=0)
    {
        cout<<"NO"<<e;
    }
    else
    {
        cout<<"YES"<<e;
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
