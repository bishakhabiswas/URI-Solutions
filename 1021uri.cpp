///100,50,20,10,5,2,1,0.50,0.25,0.10,0.05 0.01
/// 10000 5000 2000 1000 500 200 100 50 25 10 5 1



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,b,c,d,e,f,g,h,i,j,k,m,l;
    scanf("%d",&n);
    l = n *100;
    a= l/10000;
    l = l%10000;
    b= l/5000;
    l = l%5000;

    c= l/2000;
    l = l%2000;
    d= l/1000;
    l = l%1000;
    e= l/500;
    l = l%500;

    f= l/200;
    l = l%200;
    g= l/100;
    l = l%100;
    h= l/50;
    l = l%50;

    i= l/25;
    l = l%25;

    j= l/10;
    l = l%10;

    k= l/5;
    l = l%5;
    m= l/1;




    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",m);


}








