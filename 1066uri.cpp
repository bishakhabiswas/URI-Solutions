#include<bits/stdc++.h>
using namespace std;
int main()
{
    int E=0,O=0,P=0,N=0;
    int t;
    for(int i=0;i<5;i++)
    {
        cin>>t;
        if(t%2==0) E++;
        if(t%2!=0) O++;
        if(t>0) P++;
        if(t<0) N++;
    }
    printf("%d valor(es) par(es)\n",E);
    printf("%d valor(es) impar(es)\n",O);
    printf("%d valor(es) positivo(s)\n",P);
    printf("%d valor(es) negativo(s)\n",N);
}
