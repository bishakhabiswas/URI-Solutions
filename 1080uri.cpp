/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,maxi=0,pos=0;
    int i;
    for(i=1; i<=100; i++)
    {
        cin>>a;
        if(a>maxi)
        {
            maxi=a;
            pos=i;
        }
    }

    cout<<maxi<<endl;
    cout<<pos<<endl;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],pos=0;
    int i;
    int maxi = 0;
    for(i=1; i<=100; i++)
    {
        cin>>a[i];


        if(a[i]>maxi)
        {
            maxi=a[i];
            pos=i;
        }
    }

    cout<<maxi<<endl;
    cout<<pos<<endl;
}
