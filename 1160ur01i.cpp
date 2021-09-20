#include<iostream>
using namespace std;
int main()
{
    int t, pa, pb, year = 1;
    double g1, g2;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while(pa < pb){
            year++;

            if(year > 100){
                break;
            }
            pa += ((pa*g1) / 100);
            pb += ((pb*g2) / 100);
        }

        if(year > 100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos.\n", year);
        }

        year = 0;
    }
    return 0;
}
