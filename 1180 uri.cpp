#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N ;
    cin>>N;
    int A[N];
int i;
int mini,index;
cin>>A[0];
mini=A[0];
index=0;
    for(int i=1; i<N; i++)
    {
        cin>>A[i];


       if(A[i]<mini)
        {
            mini=A[i];
            index=i;
        }
    }

   printf("Menor valor: %d\nPosicao: %d\n", mini, index);

}
/*#include <stdio.h>
int main()
{
   int a,b,c,d,e,N, p, min;
    scanf("%d", &N);
    int X[N];
    for(a=0; a<N; a++)
        scanf("%d", &X[a]);
    min=X[0];
    for(a=1; a<N; a++)
    {
        if(min>X[a])
        {
            min=X[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, p);
    return 0;
}
*/
