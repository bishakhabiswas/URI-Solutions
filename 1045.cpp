///Uri_1045_Triangle Types

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c ,i,j,k,temp;

    cin>>a>>b>>c;
    if(a<b){temp=a;a=b;b=temp;} ///as its decreasing series so "<" operand
    if(a<c){temp=a;a=c;c=temp;}
    if(b<c){temp=b;b=c;c=temp;}
    i=a*a;
    j=b*b;
    k=c*c;
    if(a >= b+c) cout<<"NAO FORMA TRIANGULO\n";
    else{
    if(i == j+k) cout<<"TRIANGULO RETANGULO\n";
    if(i>j+k)  cout<<"TRIANGULO OBTUSANGULO\n";
    if(i<j+k)  cout<<"TRIANGULO ACUTANGULO\n";
    if(a==b && b==c)  cout<<"TRIANGULO EQUILATERO\n";
  else if(a==b || a==c || b==c)  cout<<"TRIANGULO ISOSCELES\n";
    }
return 0;

}
