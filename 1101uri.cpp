#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,p=0,temp;
//    for(; i; i++)
  //  {
     while(2==   scanf("%d %d",&a,&b)){
        if(a<=0 || b<=0)
            break;
        if(a>b)
        {
            temp= a;
            a=b;
            b=temp;
        }
        for(j=a; j<=b; j++ )
        {
            printf("%d ",j);
            p+=j;
        }
        printf("Sum=%d\n",p);
        p=0;

    }
    return 0;
}
