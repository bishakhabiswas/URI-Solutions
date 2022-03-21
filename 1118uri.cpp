#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,avg,Arr[3];
    int j=0,W;
    while(1)
    {
        while(1)
        {
            cin>>a;
            if(a>=0 && a<=10)
            {
                Arr[j]=a;
                j++;
            }
            else cout<<"nota invalida"<<endl;
            if(j>1) break;

        }
        avg=(Arr[0]+Arr[1])/2;
        printf("media = %.2lf\n",avg);
        j=0;
        while(1)
        {
            cin>>W;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            if( W==1 || W==2) break;
        }


        if(W==1) continue;
        else break;

    }
    return 0;
}



