
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

    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll i;
    ll chk1=0;
    ll chk2=0;

     for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            chk1++;
        }
        else
        {
            chk2++;
        }

    }
    if(chk1>chk2)
    {
        cout<<"Anton"<<e;

    }
    else if(chk1<chk2)
    {
        cout<<"Danik"<<e;
    }
    else
    {
        cout<<"Friendship"<<e;
    }
}

 int main()
{
speed();

   abul();

   return 0;
}
