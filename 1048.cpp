#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,salary;
    char c = '%';

    scanf("%lf",&a);

    if(a>=0.00 && a<= 400.00 )
    {
        salary = (a+(a*15)/100);
        b = salary -a;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 15 %c\n",c  );

    }
    else if(a>=400.01 && a<=800.00)
    {


        salary = (a+(a*12)/100);
        b = salary -a;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 12 %c\n",c  );

    }

      else if(a>=800.01 && a<=1200.00)
    {


        salary = (a+(a*10)/100);
        b = salary -a;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 10 %c\n",c  );

    }

      else if(a>=1200.01 && a<=2000.00)
    {


        salary = (a+(a*7)/100);
        b = salary -a;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 7 %c\n",c  );

    }
  else if(a>2000)
    {


        salary = (a+(a*4)/100);
        b = salary -a;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 4 %c\n",c  );

    }



}
