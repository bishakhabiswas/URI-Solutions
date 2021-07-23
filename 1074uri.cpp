#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a;
        cin>>a;
        if(a>0 && a%2==0)
            cout<<"EVEN POSITIVE"<<endl;
        else if(a<0 && a%2==0)
            cout<<"EVEN NEGATIVE"<<endl;
        else if(a>0 && a%2!=0)
            printf("ODD POSITIVE\n");
        else if(a<0 && a%2!=0 )
            printf("ODD NEGATIVE\n");
        else if(a==0)
            printf("NULL\n");


    }

    return 0;
}

