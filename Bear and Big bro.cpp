#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,k=0;
    cin>>a>>b;
    while(a>0 && a<=b)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            break;
        }
        else
        {
            k++;
        }
    }
    cout<<k+1<<endl;
    return 0;
}
