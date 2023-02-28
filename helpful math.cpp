
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
    string s;
    cin>>s;
    for(int i=0;i<s.size();i+=2)
    {

        for(int j=0;j<s.size()-1;j+=2)
        {
            if(s[j]>s[j+2])
            {
                swap(s[j],s[j+2]);
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
