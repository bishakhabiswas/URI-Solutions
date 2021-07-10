#include<iostream>
using namespace std;
int main()
{
        int n,res[100];
        cin>>n;
        res[0]=0;
        res[1]= 1;
        for(int i=2;i<n;i++)
        {
           res[i]=res[i-1]+res[i-2];
        }
        cout<<"0";
        for(int i=1;i<n;i++)
        {
            cout<<" "<<res[i];

        }

        cout<<"\n";



}
