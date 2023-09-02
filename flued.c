#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define GF 9.81

int psol(int *de,int *he);
int fsol(int *vi,int *ar ,int *ve ,int *he);
int visol(int *fo, int *he, int *ar, int *ve);
int dsol(int *pr,int *he);
int asol(int *fo ,int *he ,int *vi ,int *ve);
int vesol(int *fo, int *he, int *vi, int *ar);

int main  (){

    int i;
    int p, f, d, h, v, a, u;

    printf("select option:\n");
    printf("pressure:1 - force:2 - Viscosity:3 - density:4\n");
    printf("area:5 - velocity:6 - height:7\n");
    printf("select:"); scanf("%d", &i);


    if ( 0 < i < 7){
        switch(i)
        {
            case 1:
                printf("enter in order: density - height\n");
                printf("enter:"); scanf(" %d %d", &d ,&h);
            int pressure = psol(&d,&h);
            printf("pressure is : %d\n", pressure);
            printf("note: standard units\n ");
            break;
            case 2:
                printf("enter in order: Viscosity - area - velocity - height\n");
                printf("enter:"); scanf(" %d %d %d %d", &v ,&a ,&u ,&h);
            int force = fsol(&v ,&a ,&u ,&h);
            printf("force is : %d\n", force);
            printf("note: standard units\n ");
            break;
            case 3:
                printf("enter in order: force - height - area - velocity\n");
                printf("enter:"); scanf(" %d %d %d %d", &f ,&h ,&a ,&u);
            int Viscosity = visol(&f ,&h ,&a ,&u);
            printf("Viscosity is : %d\n", Viscosity);
            printf("note: standard units\n ");
            break;
            case 4:
                printf("enter in order: pressure - height\n");
                printf("enter:"); scanf(" %d %d", &p ,&h);
            int density = dsol(&p,&h);
            printf("density is : %d\n", density);
            printf("note: standard units\n ");
            break;
            case 5:
                printf("enter in order: force - height - Viscosity -velocity\n");
                printf("enter:"); scanf(" %d %d %d %d", &f ,&h ,&v ,&u);
            int area = asol(&f ,&h ,&v ,&u);
            printf("area is : %d\n", area);
            printf("note: standard units\n ");
            break;
            case 6:
                printf("enter in order: force - height - Viscosity - area\n");
                printf("enter:"); scanf(" %d %d %d %d", &f ,&h ,&v ,&a);
            int velocity = vesol(&f ,&h ,&v ,&a);
            printf("velocity is : %d\n", velocity);
            printf("note: standard units\n ");
            break;
        }
}else if ( i = 7 ){
    printf("1:height with force");
    printf("2:height with pressure");

}


}

int psol(int *de, int *he){
    int p = (*de) * (*he) * GF;
    return p;
}

int fsol(int *vi,int *ar ,int *ve ,int *he){
    int f = ((*vi) * (*ar) * (*ve)) / (*he);
    return f;
}

int visol(int *fo, int *he, int *ar, int *ve){
    int v = ((*fo) * (*he)) / ((*ar) * (*ve));
    return v;
}

int dsol(int *pr,int *he){
    int d = (*pr) / ( GF * (*he));
    return d;
}

int asol(int *fo ,int *he ,int *vi ,int *ve){
    int a = ((*fo) * (*he)) / ((*vi) * (*ve));
    return a;
}

int vesol(int *fo, int *he, int *vi, int *ar){
    int u = ((*fo) * (*he)) / ((*vi) * (*ar));
    return u;
}
