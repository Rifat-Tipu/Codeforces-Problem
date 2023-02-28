
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

    ll cnt=0;
          string s;
cin>>s;
string s2="hello";
ll ck=0;
 for(int i=0;i<s.size();i++)
    {
    if(s[i]==s2[ck])
    {
        cnt++;
        ck++;
    }
 }
 if(cnt==5)
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


