///           B I S M I L L A H I R  R A H M A N I R  R A H I M


#include<bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll int64_t
#define ld long double
#define pi 3.1415926535897932384626433832795l
#define speed() ios_base::sync_with_stdio(false);cin.tie(NULL);
void abul()
{
    ll n,t;
    string s;
    cin>>n>>t>>s;
    while(t--)
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]=='G' && s[i-1]=='B')
            {
                s[i]='B';
                s[i-1]='G';
                i++;
            }
        }
    }
    cout<<s<<e;

}

 int main()
{
speed();

   abul();

   return 0;
}
