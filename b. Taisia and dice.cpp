#include<bits/stdc++.h>
using namespace std;
#define e endl;
#define ll int64_t
void gorib()
{
    ll n,s,r;
    cin>>n>>s>>r; // 5, 17, 11
    cout<<s-r<<" "; // 6
    ll d=r/(n-1);      // 2
    ll rem=r%(n-1); // 3
    for(int i=0;i<n-1;i++)
    {
       if(rem>0)
        cout<<d+1<<" ";
        else
            cout<<d<<"  ";
        rem--;
    }
    cout<<e;

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
