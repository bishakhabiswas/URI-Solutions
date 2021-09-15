#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,i;
    cin>>a>>b;
    if(b<a)
    {
        swap(a,b);

    }

    for( i=a+1;i<b;i++)
    {
        if(i%2!=0)
        {
        sum += i;
        }
    }
    cout<<sum<<endl;
}


