#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,a,b,day,hr,mnt,sec,N;
    scanf("%*s %d",&d1);
    scanf("%d %*s",&h1);
    scanf("%d %*s",&m1);
    scanf("%d",&s1);
    scanf("%*s %d",&d2);
    scanf("%d %*s",&h2);
    scanf("%d %*s",&m2);
    scanf("%d",&s2);

    a = (d1*(24*3600))+(h1*3600)+(m1*60)+s1;
    b = (d2*(24*3600))+(h2*3600)+(m2*60)+s2;
    N=b-a;
    day = N/(24*3600);
    N=N%(24*3600);
        hr = N/(3600);
    N=N%(3600);
        mnt= N/(60);
    sec=N%(60);
    printf("%d dia(s)\n",day);
      printf("%d hora(s)\n",hr);
           printf("%d minuto(s)\n",mnt);
                  printf("%d segundo(s)",sec);




}
