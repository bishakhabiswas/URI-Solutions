#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0;
    float n[3],avg=0,a;


    while(1)
    {
        cin>>a;
        if(a>=0  && a<=10)
        {
            n[j]=a;
            j++;
        }
        else
            printf("nota invalida\n");
        if(j>1)
            break;
    }
    avg = (n[0]+n[1])/2.0;
    printf("media = %.2lf\n",avg);


}


