

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
    ll n,a,b;
    cin>>n>>a>>b;
    if((a+1)>(n-b))
    {
        cout<<n-(a+1)+1<<e;
    }
    else
    {
        cout<<n-(n-b)+1<<e;
    }

}

 int main()
{
speed();

   abul();

   return 0;
}
