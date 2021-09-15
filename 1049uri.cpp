#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    if(a == "vertebrado")
   {
        if(b=="ave" && c=="carnivoro") cout<<"aguia"<<endl;
        else if(b=="ave" && c=="onivoro") cout<<"pomba"<<endl;
        else if(b=="mamifero" && c=="onivoro") cout<<"homem"<<endl;
        else if(b=="mamifero" && c=="herbivoro") cout<<"vaca"<<endl;

   }

   else if(a=="invertebrado")
   {
        if(b=="inseto" && c=="hematofago") cout<<"pulga"<<endl;
        else if(b=="inseto" && c=="herbivoro") cout<<"lagarta"<<endl;
        else if(b=="anelideo" && c=="hematofago") cout<<"sanguessuga"<<endl;
        else if(b=="anelideo" && c=="onivoro") cout<<"minhoca"<<endl;

   }
}
/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[20], b[20], c[20];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    if(a[0] == 'v' && b[0] == 'a' && c[0] == 'c')
    {
        printf("aguia\n");
    }
    if(a[0] == 'v' && b[0] == 'a' && c[0] == 'o')
    {
        printf("pomba\n");
    }
    if(a[0] == 'v' && b[0] == 'm' && c[0] == 'o')
    {
        printf("homem\n");
    }
    if(a[0] == 'v' && b[0] == 'm' && c[0] == 'h')
    {
        printf("vaca\n");
    }
    if(a[0] == 'i' && b[0] == 'i' && c[2] == 'm')
    {
        printf("pulga\n");
    }
    if(a[0] == 'i' && b[0] == 'i' && c[2] == 'r')
    {
        printf("lagarta\n");
    }
    if(a[0] == 'i' && b[0] == 'a' && c[0] == 'h')
    {
        printf("sanguessuga\n");
    }
    if(a[0] == 'i' && b[0] == 'a' && c[0] == 'o')
    {
        printf("minhoca\n");
    }

    return 0;

}
*/
