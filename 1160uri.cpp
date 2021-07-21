#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,pa,pb,y;
    double ga,gb;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        y=0;
        cin>>pa>>pb>>ga>>gb;
        while(pa<=pb)
        {
            pa=pa+(pa*ga)/100;
            pb=pb+(pb*gb)/100;
            y++;


         if(y>100){
            cout<<"Mais de 1 seculo."<<endl;
            break;}
        }
            if(y<=100) printf("%d anos.\n",y);
    }
}

