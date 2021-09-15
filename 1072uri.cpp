#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    int count1=0,count2=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a>=10 && a<=20)
        {
            count1++;
        }
   else
        {
            count2++;
        }
    }
    printf("%d in\n",count1);
    printf("%d out\n",count2);
}
