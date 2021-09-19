#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=7,i,j,b=7;
    for(i=1;i<=9;i+=2)
    {
        for( j=1;j<=3;j++)
        {
         printf("I=%d J=%d\n",i,b);
          b--;

        }

  b=b+5;
    }

}
