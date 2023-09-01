#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define GF 9.81


int psol(int *de,int *he);


int main  (){

    int i;
    float p, f, d, h, v, a, u;

    printf("select option:\n");
    printf("pressure:1 - force:2 - Viscosity:3 - density:4\n");
    printf("area:5 - velocity:6 - height:7\n");
    printf("select:"); scanf("%d", &i);


    if (0<i<7){
        switch(i)
        {
            case 1:
                printf("enter in order: density - height\n");
                printf("enter:"); scanf(" %f %f", &d ,&h);
            float pressure = psol(&d,&h);
            printf("pressure is : %f\n", pressure);
            printf("note: standard units\n ");

        }
}


}

int psol(int *de,int *he){
    float p = (*de) * (*he) * GF;
    return p;
}
