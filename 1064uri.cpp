
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float sum=0, count=0;
    float p,n;
    for(int i=0; i<6; i++)
    {
        cin>>p;
        if(p>0)
        {
            count++;
            sum+=p;

        }
        n=(sum/count);
    }
    cout<<count<<" "<<"valores positivos"<<endl;
    printf("%.1f\n",n);
}
