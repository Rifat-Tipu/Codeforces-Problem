
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
ll cnt1=0;
ll cnt2=0;
    string s;
    cin>>s;
    ll sz=s.size();
    for(int i=0;i<sz;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            cnt1++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            cnt2++;
        }
    }
    if(cnt1>cnt2)
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    else if(cnt1<cnt2)
    {
        transform(s.begin(),s.end(),s.begin(), ::toupper);
    }
     else
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    cout<<s<<e;

}



 int main()
{
speed();

   abul();

   return 0;
}
