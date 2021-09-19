#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,total=0;
    float p1,p2,p3;

    cin>>t;
    int a=0, p=0;
    char b;
    int c=0,r=0,s=0;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(b=='C')
            c+=a;
            if(b=='R')
                r+=a;
             if(b=='S')
                s+=a;
    }
    total=c+r+s;
    p1= (c*1.00*100)/total;
    p2=(r*1.00*100)/total;
    p3=(s*1.00*100)/total;
    printf("Total: %d cobaias\n",total);
  printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
      printf("Total de sapos: %d\n",s);
      printf("Percentual de coelhos: %.2f %%\n",p1);
      printf("Percentual de ratos: %.2f %%\n",p2);
       printf("Percentual de sapos: %.2f %%\n",p3);


}
