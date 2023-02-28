#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,p=0,sum,eq1,eq2;
    cin>>n>>m;
    sum=n+m;
    for(a=0;a<sum;a++)
    {
        for(b=0;b<sum;b++)
        {
            eq1=a*a+b;
            eq2=a+b*b;
            if(eq1==n && eq2==m)
            {
                p++;
            }
        }
    }
    cout<<p<<endl;
}
