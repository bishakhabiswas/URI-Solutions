#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   int i,j;
    ll arr[60];
     arr[0]=0;
        arr[1]=1;
        for( i=2;i<61;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
    int t;
    cin>>t;

     for(j=0;j<t;j++)
    {
        int a;
        cin>>a;
       printf("Fib(%d) = %lld\n",a,arr[a]);

    }
}
