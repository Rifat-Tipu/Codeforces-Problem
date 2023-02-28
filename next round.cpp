#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,arr[1000],c=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>=arr[k] && arr[i]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
