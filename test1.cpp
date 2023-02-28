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
ll n;
 cin>>n;
 ll arr[n+1];
 ll cnt1=0;
 ll cnt2=0;
 ll odd,even;
 for(ll i=1;i<=n;i++)
 {
     cin>>arr[i];
     if(arr[i]%2==0)
     {
         cnt1++;
         even=i;
     }
     else
     {
         cnt2++;
         odd=i;
     }
 }
 if(cnt1>cnt2)
 {
     cout<<odd<<e;
 }
 else
 {
     cout<<even<<e;
 }

}

 int main()
{
speed();

   abul();

   return 0;
}
