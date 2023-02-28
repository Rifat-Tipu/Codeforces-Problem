#include<bits/stdc++.h>
using namespace std;
#define e endl
#define ll int64_t
void gorib()
{
  ll a,b,c,d;
  ll cnt=0;
  cin>>a>>b>>c>>d;
  if(a<b)
    cnt++;
  if(a<c)
    cnt++;
  if(a<d)
    cnt++;

  cout<<cnt<<e;

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
