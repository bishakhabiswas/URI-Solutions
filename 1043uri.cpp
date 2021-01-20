#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;

    if(a+b>c &&a+c>b && b+c>a)
    {   cout<<fixed;
        cout<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;


    }
    else
    {
      float  Area = 0.5*(a+b)*c;
      cout<<fixed;
        cout<<setprecision(1)<<"Area = "<<Area<<endl;
    }
}
