#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(a>b)
        printf("O JOGO DUROU %d HORA(S)\n",((b+24)-a));
    else if(b>a)
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    return 0;

}
