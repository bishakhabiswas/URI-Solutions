
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d;
    if(c>d)
    {   d=d+60;
        e=d-c;
        if(a==b) cout<<"O JOGO DUROU 24 HORA(S) E %d MINUTO(S)"<<e<<endl;

        else if(a<b) cout<<"O JOGO DUROU %d HORA(S) E %d MINUTO(S)"<<b-a-1<<e<<endl;
        else if(a>b) cout<<"O JOGO DUROU %d HORA(S) E %d MINUTO(S)"<<((b+24)-1)<<e<<endl;

    }
        else {
                if(c<d) e=d-c;


                    else e=0;

                    if(a==b) cout<<"O JOGO DUROU 24 HORA(S) E %d MINUTO(S)"<<e<<endl;

        else if(a<b) cout<<"O JOGO DUROU %d HORA(S) E %d MINUTO(S)"<<b-a<<e<<endl;


        else if(a>b) cout<<"O JOGO DUROU %d HORA(S) E %d MINUTO(S)"<<(b+24)-a<<e<<endl;


    }

}
