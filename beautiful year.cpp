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
    ll y;
    cin>>y;
    while(true)
    {
        y++;
        ll a= y/1000; //2013/1000=2
        ll b= (y/100)%10; // 2013/100= 20%10= 0
        ll c= (y/10)%10;// 2013/10=201%10=1;
        ll d= y%10; //2013%10=3
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
    }
    cout<<y<<e;

}

 int main()
{
speed();

   abul();

   return 0;
}
