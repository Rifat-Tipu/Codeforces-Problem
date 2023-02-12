
///           B I S M I L L A H I R  R A H M A N I R  R A H I M


#include<bits/stdc++.h>
using namespace std;
#define e endl
#define ll int64_t
#define ld long double
#define pi 3.1415926535897932384626433832795l
#define speed() ios_base::sync_with_stdio(false);cin.tie(NULL);

void gorib()
{
    string s1,s2;
    cin>>s1>>s2;
   transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
   transform(s2.begin(),s2.end(),s2.begin(), ::tolower);

    int x=s1.size();
    if(s1==s2)
    {
        cout<<0<<e;
    }
    else
    {
        for(int i=0;i<x;i++)
        {
            if(s1[i]>s2[i])
            {
                cout<<1<<e;
                break;
            }
            if(s1[i]<s2[i])
            {
                cout<<-1<<e;
                break;
            }
        }
    }

}

int main()
{
    speed();
//int t;
///cin>>t;
//while(t--)
//{
gorib();
//}
return 0;
}



