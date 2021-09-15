#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float a,b,c,ans,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
     //   m=((a*2*1.0)+(b*3*1.0)+(c*5*1.0));
        ans= ((a*2*1.0)+(b*3*1.0)+(c*5*1.0))/((2+3+5));
        printf("%.1f\n",ans);

    }

}
