#include<bits/stdc++.h>
using namespace std;
int main()
{  int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a>0 && b>0) printf("primeiro\n");
        if(a>0 && b<0) printf("quarto\n");
        if(a<0 && b<0) printf("terceiro\n");
        if(a<0 && b>0) printf("segundo\n");
        if(a==0 || b==0) break;
    }
}
