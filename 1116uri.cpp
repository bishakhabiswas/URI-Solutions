#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    float y,t;
    float result;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(y==0) printf("divisao impossivel\n");
        else{
        result = x/y;
        printf("%.1f\n",result*1.0);
    }
    }

}
