#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,sum=0,p=0;
    cin>>t;
    for( int i=0; i<t; i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            swap(b,a);

        }
        for( int p=a+1; p<b; p++)
        {
            if(p%2!=0)
            {
                sum+=p;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
}
