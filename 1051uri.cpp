#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,p;
    cin>>n;
    if(n>=0.00 && n<=2000.00) printf("Isento\n");
    else if(n>2000.00 &&n<=3000.00)
    {
        n=(n-2000.00);
        n=(n*8)/100;
        printf("R$ %.2f\n",n);
    }
       else if(n>=3000.01 &&n<=4500.00)
    {
        n=(n-3000.00);
        n=((n*18)/100)+80;

        printf("R$ %.2lf\n",n);
    }
       else if(n>4500.01)
    {
        n=(n-4500.00);
        n=((n*28)/100)+80+270;
        printf("R$ %.2f\n",n);
    }
}
