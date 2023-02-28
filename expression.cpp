
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
ll a,b,c;
cin>>a>>b>>c;
ll x,y,z,t,w;
x=a+b*c;
y=a*(b+c);
z=a*b*c;
t=(a+b)*c;
w=a+b+c;
ll mx=max(x,max(y,max(z,max(t,w))));
cout<<mx<<e;
}

 int main()
{
speed();

   abul();

   return 0;
}
