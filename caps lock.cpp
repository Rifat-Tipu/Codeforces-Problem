
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
    string s;
    cin>>s;
    ll sz=s.size();
    //cout<<sz;
    ll cnt=0;
    ll cnt2=0;
    ll k;
   for(int i=0;i<sz;i++)
   {
       if(s[i]>='A' && s[i]<='Z')
       {
           cnt++;
       }
       k=i+1;
       if(s[k]>='a' && s[k]<='z')
       {
           cnt2++;
       }

    }
    if(cnt==sz)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
    else if(s[0]>='a'&&s[0]<='z' && cnt2==0)
    {
        transform(s.begin()+1,s.end(),s.begin()+1,::tolower);
        s[0]=s[0]-32;
        cout<<s;
    }
    else
    {
        cout<<s<<e;
    }


}


 int main()
{
speed();

   abul();

   return 0;
}
